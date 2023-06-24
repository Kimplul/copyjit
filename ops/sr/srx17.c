#include "../common.h"
DEFINE_OP(srx17) {
	NEXT_OP(sp, a, (sreg_t)x >> 17, y, o);
}
