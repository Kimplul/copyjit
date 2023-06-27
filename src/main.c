/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include <stdint.h>
#include <stddef.h>

#include "copyjit.h"

int main()
{
	ctx_t ctx;
	compile_start(&ctx);

	compile_fast_lia(&ctx, 0); // total in a

	compile_fast_liy(&ctx, 0);

	void *top = compile_movxa(&ctx); // iter + total in a
	compile_add(&ctx);

	compile_incy(&ctx); // increment iter
	compile_fast_lio(&ctx, 1000000000); // limit in o
	compile_subyo(&ctx);

	compile_fast_lio(&ctx, (uintptr_t)top); // branch target in o
	/* if we already know the offset, we could generate a ban with immediate
	 * offsets to save one register? */
	compile_ban(&ctx);

	compile_end(&ctx);

	compile_finish(&ctx);

	run(&ctx);
}
