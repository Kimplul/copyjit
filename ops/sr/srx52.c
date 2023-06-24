#include "../common.h"
DEFINE_OP(srx52) {
	NEXT_OP(sp, a, (sreg_t)x >> 52, y, o);
}
