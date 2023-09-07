#include "../common.h"

DEFINE_OP(call) {
	x = ((op_call)IMM())(sp, a, x, y, o);
	NEXT_OP(sp, a, x, y, o);
}
