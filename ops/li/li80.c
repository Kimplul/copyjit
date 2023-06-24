#include "../common.h"
DEFINE_OP(li80) {
	UNUSED(o); NEXT_OP(sp, a, x, y, 80);
}
