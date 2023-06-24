#include "../common.h"
DEFINE_OP(sro11) {
	NEXT_OP(sp, a, x, y, (sreg_t)o >> 11);
}
