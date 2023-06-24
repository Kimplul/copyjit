#include "../common.h"
DEFINE_OP(srx42) {
	NEXT_OP(sp, a, (sreg_t)x >> 42, y, o);
}
