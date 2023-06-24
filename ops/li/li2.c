#include "../common.h"
DEFINE_OP(li2) {
	UNUSED(o); NEXT_OP(sp, a, x, y, 2);
}
