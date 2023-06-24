#include "../common.h"
DEFINE_OP(sry11) {
	NEXT_OP(sp, a, x, (sreg_t)y >> 11, o);
}
