SRC_LOCAL	!= echo src/*.c
SOURCES		+= $(SRC_LOCAL)

# a bit ugly maybe, but I'm not aware of a better way to tell make
# "hey, these files have to generate some stuff for us"
src/main.c: src/copyjit.h
src/copyjit.c: src/copyjit.h
src/copyjit.h:  lib/op_decls.h lib/imm_decls.h
