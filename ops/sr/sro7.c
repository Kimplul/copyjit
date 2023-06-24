#include "../common.h"
DEFINE_OP(sro7) {
	NEXT_OP(sp, a, x, y, (sreg_t)o >> 7);
}
