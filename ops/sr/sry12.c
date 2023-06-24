#include "../common.h"
DEFINE_OP(sry12) {
	NEXT_OP(sp, a, x, (sreg_t)y >> 12, o);
}
