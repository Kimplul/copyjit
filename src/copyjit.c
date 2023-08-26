/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include <string.h>
#include <stdint.h>
#include <stdlib.h>
#include <assert.h>
#include <sys/mman.h>

#include "copyjit.h"

#include "../lib/ops.h"
#include "../lib/op_defns.h"

#include "../lib/imm.h"
#include "../lib/imm_defns.h"

#include "../ops/common.h"

#define SELECT(i, ctx, name) \
case i: name##i (ctx); break;

#define SELECT64(ctx, name)   \
	SELECT(0, ctx, name)  \
	SELECT(1, ctx, name)  \
	SELECT(2, ctx, name)  \
	SELECT(3, ctx, name)  \
	SELECT(4, ctx, name)  \
	SELECT(5, ctx, name)  \
	SELECT(6, ctx, name)  \
	SELECT(7, ctx, name)  \
	SELECT(8, ctx, name)  \
	SELECT(9, ctx, name)  \
	SELECT(10, ctx, name) \
	SELECT(11, ctx, name) \
	SELECT(12, ctx, name) \
	SELECT(13, ctx, name) \
	SELECT(14, ctx, name) \
	SELECT(15, ctx, name) \
	SELECT(16, ctx, name) \
	SELECT(17, ctx, name) \
	SELECT(18, ctx, name) \
	SELECT(19, ctx, name) \
	SELECT(20, ctx, name) \
	SELECT(21, ctx, name) \
	SELECT(22, ctx, name) \
	SELECT(23, ctx, name) \
	SELECT(24, ctx, name) \
	SELECT(25, ctx, name) \
	SELECT(26, ctx, name) \
	SELECT(27, ctx, name) \
	SELECT(28, ctx, name) \
	SELECT(29, ctx, name) \
	SELECT(30, ctx, name) \
	SELECT(31, ctx, name) \
	SELECT(32, ctx, name) \
	SELECT(33, ctx, name) \
	SELECT(34, ctx, name) \
	SELECT(35, ctx, name) \
	SELECT(36, ctx, name) \
	SELECT(37, ctx, name) \
	SELECT(38, ctx, name) \
	SELECT(39, ctx, name) \
	SELECT(40, ctx, name) \
	SELECT(41, ctx, name) \
	SELECT(42, ctx, name) \
	SELECT(43, ctx, name) \
	SELECT(44, ctx, name) \
	SELECT(45, ctx, name) \
	SELECT(46, ctx, name) \
	SELECT(47, ctx, name) \
	SELECT(48, ctx, name) \
	SELECT(49, ctx, name) \
	SELECT(50, ctx, name) \
	SELECT(51, ctx, name) \
	SELECT(52, ctx, name) \
	SELECT(53, ctx, name) \
	SELECT(54, ctx, name) \
	SELECT(55, ctx, name) \
	SELECT(56, ctx, name) \
	SELECT(57, ctx, name) \
	SELECT(58, ctx, name) \
	SELECT(59, ctx, name) \
	SELECT(60, ctx, name) \
	SELECT(61, ctx, name) \
	SELECT(62, ctx, name) \
	SELECT(63, ctx, name) \

#define SELECT256(ctx, name)   \
	SELECT64(ctx, name)    \
	SELECT(64, ctx, name)  \
	SELECT(65, ctx, name)  \
	SELECT(66, ctx, name)  \
	SELECT(67, ctx, name)  \
	SELECT(68, ctx, name)  \
	SELECT(69, ctx, name)  \
	SELECT(70, ctx, name)  \
	SELECT(71, ctx, name)  \
	SELECT(72, ctx, name)  \
	SELECT(73, ctx, name)  \
	SELECT(74, ctx, name)  \
	SELECT(75, ctx, name)  \
	SELECT(76, ctx, name)  \
	SELECT(77, ctx, name)  \
	SELECT(78, ctx, name)  \
	SELECT(79, ctx, name)  \
	SELECT(80, ctx, name)  \
	SELECT(81, ctx, name)  \
	SELECT(82, ctx, name)  \
	SELECT(83, ctx, name)  \
	SELECT(84, ctx, name)  \
	SELECT(85, ctx, name)  \
	SELECT(86, ctx, name)  \
	SELECT(87, ctx, name)  \
	SELECT(88, ctx, name)  \
	SELECT(89, ctx, name)  \
	SELECT(90, ctx, name)  \
	SELECT(91, ctx, name)  \
	SELECT(92, ctx, name)  \
	SELECT(93, ctx, name)  \
	SELECT(94, ctx, name)  \
	SELECT(95, ctx, name)  \
	SELECT(96, ctx, name)  \
	SELECT(97, ctx, name)  \
	SELECT(98, ctx, name)  \
	SELECT(99, ctx, name)  \
	SELECT(100, ctx, name) \
	SELECT(101, ctx, name) \
	SELECT(102, ctx, name) \
	SELECT(103, ctx, name) \
	SELECT(104, ctx, name) \
	SELECT(105, ctx, name) \
	SELECT(106, ctx, name) \
	SELECT(107, ctx, name) \
	SELECT(108, ctx, name) \
	SELECT(109, ctx, name) \
	SELECT(110, ctx, name) \
	SELECT(111, ctx, name) \
	SELECT(112, ctx, name) \
	SELECT(113, ctx, name) \
	SELECT(114, ctx, name) \
	SELECT(115, ctx, name) \
	SELECT(116, ctx, name) \
	SELECT(117, ctx, name) \
	SELECT(118, ctx, name) \
	SELECT(119, ctx, name) \
	SELECT(120, ctx, name) \
	SELECT(121, ctx, name) \
	SELECT(122, ctx, name) \
	SELECT(123, ctx, name) \
	SELECT(124, ctx, name) \
	SELECT(125, ctx, name) \
	SELECT(126, ctx, name) \
	SELECT(127, ctx, name) \
	SELECT(128, ctx, name) \
	SELECT(129, ctx, name) \
	SELECT(130, ctx, name) \
	SELECT(131, ctx, name) \
	SELECT(132, ctx, name) \
	SELECT(133, ctx, name) \
	SELECT(134, ctx, name) \
	SELECT(135, ctx, name) \
	SELECT(136, ctx, name) \
	SELECT(137, ctx, name) \
	SELECT(138, ctx, name) \
	SELECT(139, ctx, name) \
	SELECT(140, ctx, name) \
	SELECT(141, ctx, name) \
	SELECT(142, ctx, name) \
	SELECT(143, ctx, name) \
	SELECT(144, ctx, name) \
	SELECT(145, ctx, name) \
	SELECT(146, ctx, name) \
	SELECT(147, ctx, name) \
	SELECT(148, ctx, name) \
	SELECT(149, ctx, name) \
	SELECT(150, ctx, name) \
	SELECT(151, ctx, name) \
	SELECT(152, ctx, name) \
	SELECT(153, ctx, name) \
	SELECT(154, ctx, name) \
	SELECT(155, ctx, name) \
	SELECT(156, ctx, name) \
	SELECT(157, ctx, name) \
	SELECT(158, ctx, name) \
	SELECT(159, ctx, name) \
	SELECT(160, ctx, name) \
	SELECT(161, ctx, name) \
	SELECT(162, ctx, name) \
	SELECT(163, ctx, name) \
	SELECT(164, ctx, name) \
	SELECT(165, ctx, name) \
	SELECT(166, ctx, name) \
	SELECT(167, ctx, name) \
	SELECT(168, ctx, name) \
	SELECT(169, ctx, name) \
	SELECT(170, ctx, name) \
	SELECT(171, ctx, name) \
	SELECT(172, ctx, name) \
	SELECT(173, ctx, name) \
	SELECT(174, ctx, name) \
	SELECT(175, ctx, name) \
	SELECT(176, ctx, name) \
	SELECT(177, ctx, name) \
	SELECT(178, ctx, name) \
	SELECT(179, ctx, name) \
	SELECT(180, ctx, name) \
	SELECT(181, ctx, name) \
	SELECT(182, ctx, name) \
	SELECT(183, ctx, name) \
	SELECT(184, ctx, name) \
	SELECT(185, ctx, name) \
	SELECT(186, ctx, name) \
	SELECT(187, ctx, name) \
	SELECT(188, ctx, name) \
	SELECT(189, ctx, name) \
	SELECT(190, ctx, name) \
	SELECT(191, ctx, name) \
	SELECT(192, ctx, name) \
	SELECT(193, ctx, name) \
	SELECT(194, ctx, name) \
	SELECT(195, ctx, name) \
	SELECT(196, ctx, name) \
	SELECT(197, ctx, name) \
	SELECT(198, ctx, name) \
	SELECT(199, ctx, name) \
	SELECT(200, ctx, name) \
	SELECT(201, ctx, name) \
	SELECT(202, ctx, name) \
	SELECT(203, ctx, name) \
	SELECT(204, ctx, name) \
	SELECT(205, ctx, name) \
	SELECT(206, ctx, name) \
	SELECT(207, ctx, name) \
	SELECT(208, ctx, name) \
	SELECT(209, ctx, name) \
	SELECT(210, ctx, name) \
	SELECT(211, ctx, name) \
	SELECT(212, ctx, name) \
	SELECT(213, ctx, name) \
	SELECT(214, ctx, name) \
	SELECT(215, ctx, name) \
	SELECT(216, ctx, name) \
	SELECT(217, ctx, name) \
	SELECT(218, ctx, name) \
	SELECT(219, ctx, name) \
	SELECT(220, ctx, name) \
	SELECT(221, ctx, name) \
	SELECT(222, ctx, name) \
	SELECT(223, ctx, name) \
	SELECT(224, ctx, name) \
	SELECT(225, ctx, name) \
	SELECT(226, ctx, name) \
	SELECT(227, ctx, name) \
	SELECT(228, ctx, name) \
	SELECT(229, ctx, name) \
	SELECT(230, ctx, name) \
	SELECT(231, ctx, name) \
	SELECT(232, ctx, name) \
	SELECT(233, ctx, name) \
	SELECT(234, ctx, name) \
	SELECT(235, ctx, name) \
	SELECT(236, ctx, name) \
	SELECT(237, ctx, name) \
	SELECT(238, ctx, name) \
	SELECT(239, ctx, name) \
	SELECT(240, ctx, name) \
	SELECT(241, ctx, name) \
	SELECT(242, ctx, name) \
	SELECT(243, ctx, name) \
	SELECT(244, ctx, name) \
	SELECT(245, ctx, name) \
	SELECT(246, ctx, name) \
	SELECT(247, ctx, name) \
	SELECT(248, ctx, name) \
	SELECT(249, ctx, name) \
	SELECT(250, ctx, name) \
	SELECT(251, ctx, name) \
	SELECT(252, ctx, name) \
	SELECT(253, ctx, name) \
	SELECT(254, ctx, name) \
	SELECT(255, ctx, name)

static void select_lio(ctx_t *ctx, uint8_t i)
{
	switch (i) {
		SELECT256(ctx, compile_lio);
	}
}

static void select_lia(ctx_t *ctx, uint8_t i)
{
	switch (i) {
		SELECT256(ctx, compile_lia);
	}
}

static void select_lix(ctx_t *ctx, uint8_t i)
{
	switch (i) {
		SELECT256(ctx, compile_lix);
	}
}

static void select_liy(ctx_t *ctx, uint8_t i)
{
	switch (i) {
		SELECT256(ctx, compile_liy);
	}
}

static void select_addio(ctx_t *ctx, uint8_t i)
{
	switch (i) {
		SELECT256(ctx, compile_addio);
	}
}

static void select_addia(ctx_t *ctx, uint8_t i)
{
	switch (i) {
		SELECT256(ctx, compile_addia);
	}
}

static void select_addix(ctx_t *ctx, uint8_t i)
{
	switch (i) {
		SELECT256(ctx, compile_addix);
	}
}

static void select_addiy(ctx_t *ctx, uint8_t i)
{
	switch (i) {
		SELECT256(ctx, compile_addiy);
	}
}

static void select_slo(ctx_t *ctx, uint8_t i)
{
	switch (i) {
		SELECT64(ctx, compile_slo);
	}
}

void *compile_fast_lio(ctx_t *ctx, unsigned long i)
{
	void *pc = ctx->pc;

	/* if we can trivially fit the value into a fast block, do it */
	if (i < 256) {
		select_lio(ctx, i);
		return pc;
	}

	/* otherwise use generic option */
	compile_lio(ctx, i);
	return pc;
}

void *compile_fast_lia(ctx_t *ctx, unsigned long i)
{
	void *pc = ctx->pc;

	/* if we can trivially fit the value into a fast block, do it */
	if (i < 256) {
		select_lia(ctx, i);
		return pc;
	}

	/* otherwise use generic option */
	compile_lia(ctx, i);
	return pc;
}

void *compile_fast_lix(ctx_t *ctx, unsigned long i)
{
	void *pc = ctx->pc;

	/* if we can trivially fit the value into a fast block, do it */
	if (i < 256) {
		select_lix(ctx, i);
		return pc;
	}

	/* otherwise use generic option */
	compile_lix(ctx, i);
	return pc;
}

void *compile_fast_liy(ctx_t *ctx, unsigned long i)
{
	void *pc = ctx->pc;

	/* if we can trivially fit the value into a fast block, do it */
	if (i < 256) {
		select_liy(ctx, i);
		return pc;
	}

	/* otherwise use generic option */
	compile_liy(ctx, i);
	return pc;
}

void *compile_fast_addio(ctx_t *ctx, unsigned long i)
{
	void *pc = ctx->pc;
	if (i < 256) {
		select_addio(ctx, i);
		return pc;
	}

	compile_addio(ctx, i);
	return pc;
}

void *compile_fast_addia(ctx_t *ctx, unsigned long i)
{
	void *pc = ctx->pc;
	if (i < 256) {
		select_addia(ctx, i);
		return pc;
	}

	compile_addia(ctx, i);
	return pc;
}

void *compile_fast_addix(ctx_t *ctx, unsigned long i)
{
	void *pc = ctx->pc;
	if (i < 256) {
		select_addix(ctx, i);
		return pc;
	}

	compile_addix(ctx, i);
	return pc;
}

void *compile_fast_addiy(ctx_t *ctx, unsigned long i)
{
	void *pc = ctx->pc;
	if (i < 256) {
		select_addiy(ctx, i);
		return pc;
	}

	compile_addiy(ctx, i);
	return pc;
}

void *compile_slo(ctx_t *ctx, unsigned long i)
{
	assert(i < 64);
	void *pc = ctx->pc;
	select_slo(ctx, i);
	return pc;
}

void compile_start(ctx_t *ctx)
{
	/* random number for now */
	/* oh yeah, have to ask for executable space */
	ctx->size = 4096;
	ctx->buf = mmap(NULL, ctx->size,
	                PROT_WRITE | PROT_READ | PROT_EXEC,
	                MAP_PRIVATE | MAP_ANONYMOUS,
	                -1, 0);
	ctx->pc = ctx->buf;
}

void compile_destroy(ctx_t *ctx)
{
	munmap(ctx->buf, ctx->size);
}

reloc_t compile_placeholder(ctx_t *ctx, compile_callback_t call)
{
	reloc_t r = {0};
	r.addr = call(ctx, 0);

	/* the immediate is the last sizeof(uintptr_t) bytes of the generated
	 * instruction
	 * (at least we assume, the user could've passed anything to our callback) */
	r.imm = ((uintptr_t *)ctx->pc) - 1;
	return r;
}

void compile_patch(reloc_t reloc, void *addr)
{
	*reloc.imm = (uintptr_t)addr;
}

void compile_finish(ctx_t *ctx)
{
	__builtin___clear_cache(ctx->buf, ctx->buf + ctx->size);
}

unsigned long run(ctx_t *ctx,
                  unsigned long a, unsigned long x, unsigned long y,
                  unsigned long o)
{
	void *sp = malloc(4096);
	unsigned long r = CALL(ctx->buf, sp, a, x, y, o);
	free(sp);
	return r;
}
