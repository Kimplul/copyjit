#include "../common.h"
DEFINE_OP(li1) {
	UNUSED(o); NEXT_OP(sp, a, x, y, 1);
}
