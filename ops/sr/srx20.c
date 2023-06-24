#include "../common.h"
DEFINE_OP(srx20) {
	NEXT_OP(sp, a, (sreg_t)x >> 20, y, o);
}
