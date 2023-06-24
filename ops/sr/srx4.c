#include "../common.h"
DEFINE_OP(srx4) {
	NEXT_OP(sp, a, (sreg_t)x >> 4, y, o);
}
