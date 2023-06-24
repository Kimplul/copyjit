#include "../common.h"
DEFINE_OP(sry28) {
	NEXT_OP(sp, a, x, (sreg_t)y >> 28, o);
}
