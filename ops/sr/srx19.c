#include "../common.h"
DEFINE_OP(srx19) {
	NEXT_OP(sp, a, (sreg_t)x >> 19, y, o);
}
