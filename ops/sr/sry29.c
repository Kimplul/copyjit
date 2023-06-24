#include "../common.h"
DEFINE_OP(sry29) {
	NEXT_OP(sp, a, x, (sreg_t)y >> 29, o);
}
