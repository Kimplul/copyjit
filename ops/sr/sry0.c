#include "../common.h"
DEFINE_OP(sry0) {
	NEXT_OP(sp, a, x, (sreg_t)y >> 0, o);
}
