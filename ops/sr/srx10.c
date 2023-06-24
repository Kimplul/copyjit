#include "../common.h"
DEFINE_OP(srx10) {
	NEXT_OP(sp, a, (sreg_t)x >> 10, y, o);
}
