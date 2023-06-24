#include "../common.h"
DEFINE_OP(sry38) {
	NEXT_OP(sp, a, x, (sreg_t)y >> 38, o);
}
