#include "../common.h"
DEFINE_OP(srx26) {
	NEXT_OP(sp, a, (sreg_t)x >> 26, y, o);
}
