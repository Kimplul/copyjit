#include "../common.h"
DEFINE_OP(sry33) {
	NEXT_OP(sp, a, x, (sreg_t)y >> 33, o);
}
