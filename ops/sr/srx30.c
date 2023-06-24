#include "../common.h"
DEFINE_OP(srx30) {
	NEXT_OP(sp, a, (sreg_t)x >> 30, y, o);
}
