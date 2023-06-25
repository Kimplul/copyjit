# some glue to keep everything together
lib/prune: lib/empty.bin
	$(COMPILE) lib/prune.c -o lib/prune

lib/empty.c: ops/common.h
lib/empty.bin: lib/empty
	$(OBJCOPY) -j .text -Obinary lib/empty lib/empty.bin

lib/empty: lib/empty.c
	$(OP_COMPILE) lib/empty.c -o lib/empty

src/copyjit.c: lib/decls.h
lib/decls.h: $(OPS)
	cd lib && ./gen_lib "$(OPS)"
