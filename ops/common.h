/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#ifndef OPS_COMMON_H
#define OPS_COMMON_H

typedef unsigned long reg_t;
typedef signed long sreg_t;

typedef reg_t (*op_call)(reg_t *sp, reg_t a, reg_t x, reg_t y, reg_t o);

#define NEXT_OP(sp, a, x, y, o) \
	return ((op_call)(&__next_op))((sp), (a), (x), (y), (o));

#define CALL(target, sp, a, x, y, o) \
	((op_call)(target))((sp), (a), (x), (y), (o));

#define JUMP(target, sp, a, x, y, o) \
	return CALL(target, sp, a, x, y, o);

#define BRANCH(target, cond, sp, a, x, y, o)                               \
	do {\
		if (cond) {JUMP(target, sp, a, x, y, o);}\
		else {NEXT_OP(sp, a, x, y, o);}\
	} while (0)

#define DEFINE_OP(name) reg_t _op(reg_t *sp, reg_t a, reg_t x, reg_t y, reg_t o)

#define UNUSED(x) (void)(x);

#define IMM() (*(unsigned long *)(&__imm))

#define __hidden __attribute__((visibility("hidden")))
__hidden extern void *__next_op;

__hidden extern unsigned long __imm;

#endif /* OPS_COMMON_H */
