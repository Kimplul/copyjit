#include "../common.h"
DEFINE_OP(sry8) {
	NEXT_OP(sp, a, x, (sreg_t)y >> 8, o);
}
