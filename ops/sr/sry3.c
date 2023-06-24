#include "../common.h"
DEFINE_OP(sry3) {
	NEXT_OP(sp, a, x, (sreg_t)y >> 3, o);
}
