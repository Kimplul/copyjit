#include "../common.h"
DEFINE_OP(srx0) {
	NEXT_OP(sp, a, (sreg_t)x >> 0, y, o);
}
