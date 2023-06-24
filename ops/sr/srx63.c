#include "../common.h"
DEFINE_OP(srx63) {
	NEXT_OP(sp, a, (sreg_t)x >> 63, y, o);
}
