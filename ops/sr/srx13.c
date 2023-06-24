#include "../common.h"
DEFINE_OP(srx13) {
	NEXT_OP(sp, a, (sreg_t)x >> 13, y, o);
}
