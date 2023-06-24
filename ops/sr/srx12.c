#include "../common.h"
DEFINE_OP(srx12) {
	NEXT_OP(sp, a, (sreg_t)x >> 12, y, o);
}
