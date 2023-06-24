#include "../common.h"
DEFINE_OP(srx16) {
	NEXT_OP(sp, a, (sreg_t)x >> 16, y, o);
}
