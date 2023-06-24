#include "../common.h"
DEFINE_OP(li123) {
	UNUSED(o); NEXT_OP(sp, a, x, y, 123);
}
