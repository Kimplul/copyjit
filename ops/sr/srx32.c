#include "../common.h"
DEFINE_OP(srx32) {
	NEXT_OP(sp, a, (sreg_t)x >> 32, y, o);
}
