#include "../common.h"
DEFINE_OP(srx11) {
	NEXT_OP(sp, a, (sreg_t)x >> 11, y, o);
}
