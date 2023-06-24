# some glue to keep everything together
lib/prune: lib/empty.bin
	$(COMPILE) lib/prune.c -o lib/prune

lib/empty.c: ops/common.h
lib/empty.bin: lib/empty.o
	$(OBJCOPY) -j .text -Obinary lib/empty.o lib/empty.bin

lib/empty.o: lib/empty.c
	$(OP_COMPILE) -c lib/empty.c -o lib/empty.o

src/copyjit.c: lib/decls.h
lib/decls.h: $(OPS)
	cd lib && ./gen_lib "$(OPS)"
