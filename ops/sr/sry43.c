#include "../common.h"
DEFINE_OP(sry43) {
	NEXT_OP(sp, a, x, (sreg_t)y >> 43, o);
}
