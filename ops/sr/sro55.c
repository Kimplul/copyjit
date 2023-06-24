#include "../common.h"
DEFINE_OP(sro55) {
	NEXT_OP(sp, a, x, y, (sreg_t)o >> 55);
}
