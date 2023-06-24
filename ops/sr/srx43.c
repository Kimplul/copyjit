#include "../common.h"
DEFINE_OP(srx43) {
	NEXT_OP(sp, a, (sreg_t)x >> 43, y, o);
}
