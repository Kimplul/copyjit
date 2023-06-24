#include "../common.h"
DEFINE_OP(sro36) {
	NEXT_OP(sp, a, x, y, (sreg_t)o >> 36);
}
