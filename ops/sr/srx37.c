#include "../common.h"
DEFINE_OP(srx37) {
	NEXT_OP(sp, a, (sreg_t)x >> 37, y, o);
}
