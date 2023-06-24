#include "../common.h"
DEFINE_OP(sry16) {
	NEXT_OP(sp, a, x, (sreg_t)y >> 16, o);
}
