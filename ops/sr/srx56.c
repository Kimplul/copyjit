#include "../common.h"
DEFINE_OP(srx56) {
	NEXT_OP(sp, a, (sreg_t)x >> 56, y, o);
}
