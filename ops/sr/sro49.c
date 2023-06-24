#include "../common.h"
DEFINE_OP(sro49) {
	NEXT_OP(sp, a, x, y, (sreg_t)o >> 49);
}
