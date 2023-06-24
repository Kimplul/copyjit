#include "../common.h"
DEFINE_OP(sro35) {
	NEXT_OP(sp, a, x, y, (sreg_t)o >> 35);
}
