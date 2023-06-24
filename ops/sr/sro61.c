#include "../common.h"
DEFINE_OP(sro61) {
	NEXT_OP(sp, a, x, y, (sreg_t)o >> 61);
}
