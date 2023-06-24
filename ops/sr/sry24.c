#include "../common.h"
DEFINE_OP(sry24) {
	NEXT_OP(sp, a, x, (sreg_t)y >> 24, o);
}
