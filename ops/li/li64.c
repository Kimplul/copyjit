#include "../common.h"
DEFINE_OP(li64) {
	UNUSED(o); NEXT_OP(sp, a, x, y, 64);
}
