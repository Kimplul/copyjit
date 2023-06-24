#include "../common.h"
DEFINE_OP(sry23) {
	NEXT_OP(sp, a, x, (sreg_t)y >> 23, o);
}
