#include "../common.h"
DEFINE_OP(sry10) {
	NEXT_OP(sp, a, x, (sreg_t)y >> 10, o);
}
