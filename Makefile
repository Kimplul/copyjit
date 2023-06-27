DO	!= echo -n > deps.mk

LLVM		?= 0
RELEASE		?= 0
DEBUGFLAGS	!= [ "$(RELEASE)" != "0" ] \
			&& echo "-flto=auto -O2 -DNODEBUG" \
			|| echo "-O0 -g -DDEBUG"

CFLAGS		= -Wall -Wextra
DEPFLAGS	= -MT $@ -MMD -MP -MF $@.d
LINTFLAGS	= -fsyntax-only
INCLUDEFLAGS	= -Iinclude
COMPILEFLAGS	=
LINKFLAGS	=

all: copyjit

# default values
CROSS_COMPILE	?=

# common programs
OBJCOPY		!= [ "$(LLVM)" != "0" ] \
			&& echo llvm-objcopy \
			|| echo $(CROSS_COMPILE)objcopy

# weird, I thought clang accepted the same system target triplet as gcc?
# apparently it should be passed without a trailing dash, will have to fix
COMPILER	!= [ "$(LLVM)" != "0" ] \
			&& echo clang --target="$(CROSS_COMPILE)" \
			|| echo $(CROSS_COMPILE)gcc

SOURCES		:=
OP_SOURCES	:=
IMM_SOURCES	:=

include ops/source.mk
include src/source.mk

# compile tools with these flags
# at the moment just prune.c, wonder if it should be rewritten in some
# scripting language?
HOST_COMPILE	= $(CC) $(DEBUGFLAGS) $(CFLAGS)

COMPILE		= $(COMPILER) $(DEBUGFLAGS)\
		  $(CFLAGS) $(DEPFLAGS) $(COMPILEFLAGS) $(INCLUDEFLAGS)

OP_COMPILE	:= $(COMPILER) \
		   -Wall -Wextra -O2 \
		   -fno-schedule-insns -fno-schedule-insns2 \
		   -fpic -fpie \
		   -T lib/link.ld \
		   -ffreestanding \
		   -nostdlib

IMM_COMPILE	:= $(COMPILER) \
		   -Wall -Wextra -O2 \
		   -fpic -fpie \
		   -T lib/imm.ld \
		   -ffreestanding \
		   -nostdlib

# load arch specific compilation options
# as much as I'd like to have everything be completely generic,
# it seems that some arch specific memory models generate unsuitable code
# so we have to specify which models we want to use.
ARCH		!= uname -m
-include arch/$(ARCH).mk

LINT		= $(COMPILE) $(LINTFLAGS)

OBJS		!= ./scripts/gen-deps --sources "$(SOURCES)"
OPS		!= ./scripts/gen-ops --ops "$(OP_SOURCES)"
IMMS		!= ./scripts/gen-ops --imms "$(IMM_SOURCES)"

include deps.mk
include lib/source.mk

.PHONY: lint
lint: $(OBJS:.o=.o.l)

.PHONY: format
format:
	@find src ops lib -iname '*.[ch]' |\
		xargs -n 10 -P 0 uncrustify -c uncrustify.conf --no-backup -F -

.PHONY: license
license:
	@find . -iname '*.[ch]' |\
		xargs -n 10 -P 0 ./scripts/license

.PHONY: docs
docs:
	@./scripts/warn-undocumented
	@doxygen docs/doxygen.conf

.PHONY: check
check: copyjit
	./tests/check.sh

copyjit: $(OBJS)
	$(COMPILE) $(OBJS) -o $@

# todo: generate operations after cloning? a bit tricky to tell make to generate
# a bunch of files only when required, maybe have a configure stage?

# todo: set up some qemu cross compile environment and test different
# architectures

# could probably make this a bit prettier
.PHONY: clean
clean:
	@$(RM) -r build copyjit lib/gen/* lib/*.bin lib/*.d lib/empty lib/prune deps.mk
	@$(RM) -r lib/*decls.h lib/*defns.h lib/ops.h lib/imm.h

.PHONY: clean_docs
clean_docs:
	@$(RM) -r docs/output

.PHONY: clean_all
clean_all: clean clean_docs
