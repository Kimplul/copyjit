#include "../common.h"
DEFINE_OP(srx7) {
	NEXT_OP(sp, a, (sreg_t)x >> 7, y, o);
}
