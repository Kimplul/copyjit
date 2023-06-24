#include "../common.h"
DEFINE_OP(sro42) {
	NEXT_OP(sp, a, x, y, (sreg_t)o >> 42);
}
