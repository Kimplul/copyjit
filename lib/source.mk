# some glue to keep everything together
lib/prune: lib/empty.bin
	$(COMPILE) lib/prune.c -o lib/prune

lib/empty.c: ops/common.h
lib/empty.bin: lib/empty
	$(OBJCOPY) -j .text -Obinary lib/empty lib/empty.bin

lib/empty: lib/empty.c
	$(OP_COMPILE) lib/empty.c -o lib/empty

lib/op_decls.h: $(OPS)
	cd lib && ./gen_op "$(OPS)"

lib/imm_decls.h: $(IMMS)
	cd lib && ./gen_imm "$(IMMS)"
