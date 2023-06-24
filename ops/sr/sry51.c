#include "../common.h"
DEFINE_OP(sry51) {
	NEXT_OP(sp, a, x, (sreg_t)y >> 51, o);
}
