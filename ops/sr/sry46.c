#include "../common.h"
DEFINE_OP(sry46) {
	NEXT_OP(sp, a, x, (sreg_t)y >> 46, o);
}
