#include "../common.h"
DEFINE_OP(srx1) {
	NEXT_OP(sp, a, (sreg_t)x >> 1, y, o);
}
