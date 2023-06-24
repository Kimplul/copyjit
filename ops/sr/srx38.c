#include "../common.h"
DEFINE_OP(srx38) {
	NEXT_OP(sp, a, (sreg_t)x >> 38, y, o);
}
