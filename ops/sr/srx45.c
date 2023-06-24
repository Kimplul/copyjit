#include "../common.h"
DEFINE_OP(srx45) {
	NEXT_OP(sp, a, (sreg_t)x >> 45, y, o);
}
