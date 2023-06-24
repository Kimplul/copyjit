#include "../common.h"
DEFINE_OP(srx25) {
	NEXT_OP(sp, a, (sreg_t)x >> 25, y, o);
}
