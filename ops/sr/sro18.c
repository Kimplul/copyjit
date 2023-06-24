#include "../common.h"
DEFINE_OP(sro18) {
	NEXT_OP(sp, a, x, y, (sreg_t)o >> 18);
}
