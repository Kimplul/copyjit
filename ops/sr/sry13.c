#include "../common.h"
DEFINE_OP(sry13) {
	NEXT_OP(sp, a, x, (sreg_t)y >> 13, o);
}
