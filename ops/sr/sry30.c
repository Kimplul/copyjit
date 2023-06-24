#include "../common.h"
DEFINE_OP(sry30) {
	NEXT_OP(sp, a, x, (sreg_t)y >> 30, o);
}
