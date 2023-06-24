#include "../common.h"
DEFINE_OP(sry45) {
	NEXT_OP(sp, a, x, (sreg_t)y >> 45, o);
}
