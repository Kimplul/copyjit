#include <assert.h>
#include <stddef.h>

#include "../src/copyjit.h"

#define IMMEDIATES 1000

static void check_li()
{
	// x
	for (size_t i = 0; i < IMMEDIATES; ++i) {
		ctx_t ctx;
		compile_start(&ctx);
		compile_fast_lix(&ctx, i);
		compile_end(&ctx);
		compile_finish(&ctx);

		assert(run(&ctx) == i);
	}

	// y
	for (size_t i = 0; i < IMMEDIATES; ++i) {
		ctx_t ctx;
		compile_start(&ctx);
		// actual instruction under test
		compile_fast_liy(&ctx, i);

		// juggling to get stuff into the return register x
		compile_fast_lix(&ctx, 0);
		compile_add(&ctx);
		compile_movxa(&ctx);

		compile_end(&ctx);
		compile_finish(&ctx);

		assert(run(&ctx) == i);
	}

	// o
	for (size_t i = 0; i < IMMEDIATES; ++i) {
		ctx_t ctx;
		compile_start(&ctx);
		// actual instruction under test
		compile_fast_lio(&ctx, i);

		// juggling to get stuff into the return register x
		compile_movxo(&ctx);

		compile_end(&ctx);
		compile_finish(&ctx);

		assert(run(&ctx) == i);
	}

	// a
	for (size_t i = 0; i < IMMEDIATES; ++i) {
		ctx_t ctx;
		compile_start(&ctx);
		// actual instruction under test
		compile_fast_lia(&ctx, i);

		// juggling to get stuff into the return register x
		compile_movxa(&ctx);

		compile_end(&ctx);
		compile_finish(&ctx);

		assert(run(&ctx) == i);
	}
}

static void check_add()
{
	// x
	for (size_t i = 0; i < IMMEDIATES; ++i) {
		ctx_t ctx;
		compile_start(&ctx);

		compile_fast_lix(&ctx, 0);
		compile_fast_addix(&ctx, i);

		compile_end(&ctx);
		compile_finish(&ctx);

		assert(run(&ctx) == i);
	}

	// y
	for (size_t i = 0; i < IMMEDIATES; ++i) {
		ctx_t ctx;
		compile_start(&ctx);

		compile_fast_liy(&ctx, 0);
		compile_fast_addiy(&ctx, i);

		compile_fast_lix(&ctx, 0);
		compile_add(&ctx);
		compile_movxa(&ctx);

		compile_end(&ctx);
		compile_finish(&ctx);

		assert(run(&ctx) == i);
	}

	// o
	for (size_t i = 0; i < IMMEDIATES; ++i) {
		ctx_t ctx;
		compile_start(&ctx);

		compile_fast_lio(&ctx, 0);
		compile_fast_addio(&ctx, i);

		compile_movxo(&ctx);

		compile_end(&ctx);
		compile_finish(&ctx);

		assert(run(&ctx) == i);
	}

	// a
	for (size_t i = 0; i < IMMEDIATES; ++i) {
		ctx_t ctx;
		compile_start(&ctx);

		compile_fast_lia(&ctx, 0);
		compile_fast_addia(&ctx, i);

		compile_movxa(&ctx);

		compile_end(&ctx);
		compile_finish(&ctx);

		assert(run(&ctx) == i);
	}
}

static void check_branch()
{
	/* oh yeah, I don't support forward references (yet), so this is a bit
	 * tricky */
}

int main()
{
	check_li();
	check_add();
	check_branch();
}