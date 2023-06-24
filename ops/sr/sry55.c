#include "../common.h"
DEFINE_OP(sry55) {
	NEXT_OP(sp, a, x, (sreg_t)y >> 55, o);
}
