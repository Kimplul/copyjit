#include "../common.h"
DEFINE_OP(li128) {
	UNUSED(o); NEXT_OP(sp, a, x, y, 128);
}
