#include "../common.h"
DEFINE_OP(sro58) {
	NEXT_OP(sp, a, x, y, (sreg_t)o >> 58);
}
