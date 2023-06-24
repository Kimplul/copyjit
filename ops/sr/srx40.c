#include "../common.h"
DEFINE_OP(srx40) {
	NEXT_OP(sp, a, (sreg_t)x >> 40, y, o);
}
