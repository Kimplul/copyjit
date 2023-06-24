#include "../common.h"
DEFINE_OP(sry22) {
	NEXT_OP(sp, a, x, (sreg_t)y >> 22, o);
}
