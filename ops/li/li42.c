#include "../common.h"
DEFINE_OP(li42) {
	UNUSED(o); NEXT_OP(sp, a, x, y, 42);
}
