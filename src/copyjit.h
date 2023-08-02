/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#ifndef HMMJIT_H
#define HMMJIT_H

typedef struct {
	char *pc;
	char *buf;
	size_t size;
} ctx_t;

#include "../lib/op_decls.h"
#include "../lib/imm_decls.h"

void *compile_fast_lio(ctx_t *ctx, unsigned long i);
void *compile_fast_lia(ctx_t *ctx, unsigned long i);
void *compile_fast_lix(ctx_t *ctx, unsigned long i);
void *compile_fast_liy(ctx_t *ctx, unsigned long i);

void *compile_fast_addio(ctx_t *ctx, unsigned long i);
void *compile_fast_addia(ctx_t *ctx, unsigned long i);
void *compile_fast_addix(ctx_t *ctx, unsigned long i);
void *compile_fast_addiy(ctx_t *ctx, unsigned long i);

void *compile_slo(ctx_t *ctx, unsigned long i);
void *compile_sla(ctx_t *ctx, unsigned long i);
void *compile_slx(ctx_t *ctx, unsigned long i);
void *compile_sly(ctx_t *ctx, unsigned long i);

/** @todo add in placeholders (for example for load immediate but we don't know
 * what the immediate is yet) */

void compile_start(ctx_t *ctx);
void compile_finish(ctx_t *ctx);
unsigned long run(ctx_t *ctx);

#endif /* HMMJIT_H */
