#include "../common.h"
DEFINE_OP(li255) {
	UNUSED(o); NEXT_OP(sp, a, x, y, 255);
}
