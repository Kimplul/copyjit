#include "../common.h"
DEFINE_OP(sry48) {
	NEXT_OP(sp, a, x, (sreg_t)y >> 48, o);
}
