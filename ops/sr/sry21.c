#include "../common.h"
DEFINE_OP(sry21) {
	NEXT_OP(sp, a, x, (sreg_t)y >> 21, o);
}
