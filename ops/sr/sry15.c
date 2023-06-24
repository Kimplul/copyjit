#include "../common.h"
DEFINE_OP(sry15) {
	NEXT_OP(sp, a, x, (sreg_t)y >> 15, o);
}
