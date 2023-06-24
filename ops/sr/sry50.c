#include "../common.h"
DEFINE_OP(sry50) {
	NEXT_OP(sp, a, x, (sreg_t)y >> 50, o);
}
