#include "../common.h"
DEFINE_OP(srx27) {
	NEXT_OP(sp, a, (sreg_t)x >> 27, y, o);
}
