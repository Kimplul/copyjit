#include "../common.h"
DEFINE_OP(srx31) {
	NEXT_OP(sp, a, (sreg_t)x >> 31, y, o);
}
