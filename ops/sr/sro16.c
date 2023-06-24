#include "../common.h"
DEFINE_OP(sro16) {
	NEXT_OP(sp, a, x, y, (sreg_t)o >> 16);
}
