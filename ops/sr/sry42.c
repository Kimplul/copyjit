#include "../common.h"
DEFINE_OP(sry42) {
	NEXT_OP(sp, a, x, (sreg_t)y >> 42, o);
}
