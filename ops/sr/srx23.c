#include "../common.h"
DEFINE_OP(srx23) {
	NEXT_OP(sp, a, (sreg_t)x >> 23, y, o);
}
