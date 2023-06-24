#include "../common.h"
DEFINE_OP(li8) {
	UNUSED(o); NEXT_OP(sp, a, x, y, 8);
}
