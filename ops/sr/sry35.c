#include "../common.h"
DEFINE_OP(sry35) {
	NEXT_OP(sp, a, x, (sreg_t)y >> 35, o);
}
