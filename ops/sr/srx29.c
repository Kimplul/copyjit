#include "../common.h"
DEFINE_OP(srx29) {
	NEXT_OP(sp, a, (sreg_t)x >> 29, y, o);
}
