#include "../common.h"
DEFINE_OP(li32) {
	UNUSED(o); NEXT_OP(sp, a, x, y, 32);
}
