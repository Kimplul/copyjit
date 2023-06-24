#include "../common.h"
DEFINE_OP(srx51) {
	NEXT_OP(sp, a, (sreg_t)x >> 51, y, o);
}
