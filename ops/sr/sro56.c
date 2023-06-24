#include "../common.h"
DEFINE_OP(sro56) {
	NEXT_OP(sp, a, x, y, (sreg_t)o >> 56);
}
