#include "../common.h"
DEFINE_OP(srx49) {
	NEXT_OP(sp, a, (sreg_t)x >> 49, y, o);
}
