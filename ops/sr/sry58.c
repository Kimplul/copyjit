#include "../common.h"
DEFINE_OP(sry58) {
	NEXT_OP(sp, a, x, (sreg_t)y >> 58, o);
}
