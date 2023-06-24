#include "../common.h"
DEFINE_OP(srx41) {
	NEXT_OP(sp, a, (sreg_t)x >> 41, y, o);
}
