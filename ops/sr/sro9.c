#include "../common.h"
DEFINE_OP(sro9) {
	NEXT_OP(sp, a, x, y, (sreg_t)o >> 9);
}
