#include "../common.h"
DEFINE_OP(srx61) {
	NEXT_OP(sp, a, (sreg_t)x >> 61, y, o);
}
