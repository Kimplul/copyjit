#ifndef COPYJIT_IMM_DECLS_H
#define COPYJIT_IMM_DECLS_H
void *compile_addia(ctx_t *ctx, unsigned long i);
void *compile_addio(ctx_t *ctx, unsigned long i);
void *compile_addix(ctx_t *ctx, unsigned long i);
void *compile_addiy(ctx_t *ctx, unsigned long i);
void *compile_lia(ctx_t *ctx, unsigned long i);
void *compile_lio(ctx_t *ctx, unsigned long i);
void *compile_lix(ctx_t *ctx, unsigned long i);
void *compile_liy(ctx_t *ctx, unsigned long i);
void *compile_bani(ctx_t *ctx, unsigned long i);
#endif /* COPYJIT_DECLS_H */
