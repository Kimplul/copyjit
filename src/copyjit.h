/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#ifndef HMMJIT_H
#define HMMJIT_H

typedef struct {
	char *pc;
	char *buf;
	size_t size;
} ctx_t;

#include "../lib/decls.h"

void *compile_uli(ctx_t *ctx, unsigned long i);
void compile_start(ctx_t *ctx);
void compile_finish(ctx_t *ctx);
void run(ctx_t *ctx);

#endif /* HMMJIT_H */
