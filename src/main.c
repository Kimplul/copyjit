#include <stdint.h>
#include <stddef.h>

#include "copyjit.h"

int main()
{
	ctx_t ctx;
	compile_start(&ctx);

	compile_uli(&ctx, 0); // total in a
	compile_movao(&ctx);

	compile_uli(&ctx, 0);
	compile_movyo(&ctx); // iter in y

	void *top = compile_movxa(&ctx); // iter + total in a
	compile_add(&ctx);

	compile_incy(&ctx); // increment iter
	compile_uli(&ctx, 1000000000); // limit in o
	compile_subyo(&ctx);

	compile_uli(&ctx, (uintptr_t)top); // branch target in o
	compile_ban(&ctx);

	compile_end(&ctx);

	compile_finish(&ctx);

	run(&ctx);
}
