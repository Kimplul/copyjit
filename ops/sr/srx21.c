#include "../common.h"
DEFINE_OP(srx21) {
	NEXT_OP(sp, a, (sreg_t)x >> 21, y, o);
}
