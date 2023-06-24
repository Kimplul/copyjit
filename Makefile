DO	!= echo -n > deps.mk

DEBUGFLAGS	!= [ $(RELEASE) ] && echo "-flto=auto -O2 -DNODEBUG" || echo "-O0 -g -DDEBUG"
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
CC		= gcc
OBJCOPY		= objcopy

SOURCES		:=
OP_SOURCES	:=

include ops/source.mk
include src/source.mk

COMPILE		= $(CROSS_COMPILE)$(CC) $(DEBUGFLAGS)\
		  $(CFLAGS) $(DEPFLAGS) $(COMPILEFLAGS) $(INCLUDEFLAGS)

OP_COMPILE	= $(CROSS_COMPILE)$(CC) \
			-Wall -Wextra -O3 \
			-fno-schedule-insns -fno-schedule-insns2

LINT		= $(COMPILE) $(LINTFLAGS)

OBJS		!= ./scripts/gen-deps --sources "$(SOURCES)"
OPS		!= ./scripts/gen-ops "$(OP_SOURCES)"

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
check: ek
	./tests/check.sh

copyjit: $(OBJS)
	$(COMPILE) $(OBJS) -o $@

# could probably make this a bit prettier
.PHONY: clean
clean:
	@$(RM) -r build copyjit lib/gen/* lib/*.o lib/*.bin lib/*.d lib/prune deps.mk

.PHONY: clean_docs
clean_docs:
	@$(RM) -r docs/output

.PHONY: clean_all
clean_all: clean clean_docs
