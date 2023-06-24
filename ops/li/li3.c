#include "../common.h"
DEFINE_OP(li3) {
	UNUSED(o); NEXT_OP(sp, a, x, y, 3);
}
