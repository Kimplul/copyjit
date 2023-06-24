#include "../common.h"
DEFINE_OP(srx53) {
	NEXT_OP(sp, a, (sreg_t)x >> 53, y, o);
}
