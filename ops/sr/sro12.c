#include "../common.h"
DEFINE_OP(sro12) {
	NEXT_OP(sp, a, x, y, (sreg_t)o >> 12);
}
