#include "../common.h"
DEFINE_OP(sry2) {
	NEXT_OP(sp, a, x, (sreg_t)y >> 2, o);
}
