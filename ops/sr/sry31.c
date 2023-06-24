#include "../common.h"
DEFINE_OP(sry31) {
	NEXT_OP(sp, a, x, (sreg_t)y >> 31, o);
}
