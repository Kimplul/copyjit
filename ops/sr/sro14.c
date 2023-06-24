#include "../common.h"
DEFINE_OP(sro14) {
	NEXT_OP(sp, a, x, y, (sreg_t)o >> 14);
}
