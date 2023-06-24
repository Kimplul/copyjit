#include "../common.h"
DEFINE_OP(sry20) {
	NEXT_OP(sp, a, x, (sreg_t)y >> 20, o);
}
