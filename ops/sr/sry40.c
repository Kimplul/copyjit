#include "../common.h"
DEFINE_OP(sry40) {
	NEXT_OP(sp, a, x, (sreg_t)y >> 40, o);
}
