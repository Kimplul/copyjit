#ifndef COPYJIT_IMM_DEFNS_H
#define COPYJIT_IMM_DEFNS_H
void *compile_addia(ctx_t *ctx, unsigned long i)
 {
 	void *pc = ctx->pc;
 	memcpy(ctx->pc, gen_addia, gen_addia_len);
 	*(unsigned long *)(ctx->pc + gen_addia_len - 8) = i;
 	ctx->pc += gen_addia_len;
 	return pc;
 }
void *compile_addio(ctx_t *ctx, unsigned long i)
 {
 	void *pc = ctx->pc;
 	memcpy(ctx->pc, gen_addio, gen_addio_len);
 	*(unsigned long *)(ctx->pc + gen_addio_len - 8) = i;
 	ctx->pc += gen_addio_len;
 	return pc;
 }
void *compile_addix(ctx_t *ctx, unsigned long i)
 {
 	void *pc = ctx->pc;
 	memcpy(ctx->pc, gen_addix, gen_addix_len);
 	*(unsigned long *)(ctx->pc + gen_addix_len - 8) = i;
 	ctx->pc += gen_addix_len;
 	return pc;
 }
void *compile_addiy(ctx_t *ctx, unsigned long i)
 {
 	void *pc = ctx->pc;
 	memcpy(ctx->pc, gen_addiy, gen_addiy_len);
 	*(unsigned long *)(ctx->pc + gen_addiy_len - 8) = i;
 	ctx->pc += gen_addiy_len;
 	return pc;
 }
void *compile_lia(ctx_t *ctx, unsigned long i)
 {
 	void *pc = ctx->pc;
 	memcpy(ctx->pc, gen_lia, gen_lia_len);
 	*(unsigned long *)(ctx->pc + gen_lia_len - 8) = i;
 	ctx->pc += gen_lia_len;
 	return pc;
 }
void *compile_lio(ctx_t *ctx, unsigned long i)
 {
 	void *pc = ctx->pc;
 	memcpy(ctx->pc, gen_lio, gen_lio_len);
 	*(unsigned long *)(ctx->pc + gen_lio_len - 8) = i;
 	ctx->pc += gen_lio_len;
 	return pc;
 }
void *compile_lix(ctx_t *ctx, unsigned long i)
 {
 	void *pc = ctx->pc;
 	memcpy(ctx->pc, gen_lix, gen_lix_len);
 	*(unsigned long *)(ctx->pc + gen_lix_len - 8) = i;
 	ctx->pc += gen_lix_len;
 	return pc;
 }
void *compile_liy(ctx_t *ctx, unsigned long i)
 {
 	void *pc = ctx->pc;
 	memcpy(ctx->pc, gen_liy, gen_liy_len);
 	*(unsigned long *)(ctx->pc + gen_liy_len - 8) = i;
 	ctx->pc += gen_liy_len;
 	return pc;
 }
void *compile_bani(ctx_t *ctx, unsigned long i)
 {
 	void *pc = ctx->pc;
 	memcpy(ctx->pc, gen_bani, gen_bani_len);
 	*(unsigned long *)(ctx->pc + gen_bani_len - 8) = i;
 	ctx->pc += gen_bani_len;
 	return pc;
 }
#endif /* COPYJIT_DEFNS_H */
