#include "../common.h"
DEFINE_OP(srx3) {
	NEXT_OP(sp, a, (sreg_t)x >> 3, y, o);
}
