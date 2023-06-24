#include "../common.h"
DEFINE_OP(sry5) {
	NEXT_OP(sp, a, x, (sreg_t)y >> 5, o);
}
