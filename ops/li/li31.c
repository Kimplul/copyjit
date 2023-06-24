#include "../common.h"
DEFINE_OP(li31) {
	UNUSED(o); NEXT_OP(sp, a, x, y, 31);
}
