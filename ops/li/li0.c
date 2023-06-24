#include "../common.h"
DEFINE_OP(li0) {
	UNUSED(o); NEXT_OP(sp, a, x, y, 0);
}
