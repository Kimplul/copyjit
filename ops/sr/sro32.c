#include "../common.h"
DEFINE_OP(sro32) {
	NEXT_OP(sp, a, x, y, (sreg_t)o >> 32);
}
