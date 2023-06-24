#include "../common.h"
DEFINE_OP(sry61) {
	NEXT_OP(sp, a, x, (sreg_t)y >> 61, o);
}
