#include "../common.h"
DEFINE_OP(sry37) {
	NEXT_OP(sp, a, x, (sreg_t)y >> 37, o);
}
