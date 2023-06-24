#include "../common.h"
DEFINE_OP(sry62) {
	NEXT_OP(sp, a, x, (sreg_t)y >> 62, o);
}
