OP_SRC		!= echo ops/*.c
OP_SOURCES	+= $(OP_SRC)

include ops/addi/source.mk
include ops/bs/source.mk
include ops/li/source.mk
include ops/sl/source.mk
include ops/sr/source.mk
