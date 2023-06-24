#ifndef OPS_COMMON_H
#define OPS_COMMON_H

typedef unsigned long reg_t;
typedef signed long sreg_t;

typedef void (*op_call)(reg_t *sp, reg_t a, reg_t x, reg_t y, reg_t o);

#define NEXT_OP(sp, a, x, y, o) \
	((op_call)(&&_next_op))((sp), (a), (x), (y), (o)); _next_op: (void)1;

#define JUMP(target, sp, a, x, y, o) \
	((op_call)(target))((sp), (a), (x), (y), (o));

#define BRANCH(target, cond, sp, a, x, y, o)                        \
	((op_call)((cond) ? (void *)(target) : (void *)&&_next_op)) \
	((sp), (a), (x), (y), (o));                                 \
_next_op: (void)1;

#define DEFINE_OP(name) void name(reg_t *sp, reg_t a, reg_t x, reg_t y, reg_t o)

#define UNUSED(x) (void)(x);

#endif /* OPS_COMMON_H */
