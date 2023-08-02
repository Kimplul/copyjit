/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include <stdint.h>
#include <stdio.h>
#include <stddef.h>

#include "copyjit.h"

int main()
{
	ctx_t ctx;
	compile_start(&ctx);

	compile_fast_lix(&ctx, 0); // total in x

	compile_fast_liy(&ctx, 0); // iter in y

	void *top = compile_add(&ctx); // iter + total in a
	compile_movxa(&ctx); // move total to x

	compile_incy(&ctx); // increment iter
	compile_fast_lio(&ctx, 1000000000); // limit in o
	compile_subyo(&ctx);

	compile_fast_lio(&ctx, (uintptr_t)top); // branch target in o
	/* if we already know the offset, we could generate a ban with immediate
	 * offsets to save one register? */
	compile_ban(&ctx);

	compile_end(&ctx);

	compile_finish(&ctx);

	printf("%lu\n", run(&ctx));
}
