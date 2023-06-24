#include "../common.h"
DEFINE_OP(li100) {
	UNUSED(o); NEXT_OP(sp, a, x, y, 100);
}
