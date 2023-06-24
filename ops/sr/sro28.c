#include "../common.h"
DEFINE_OP(sro28) {
	NEXT_OP(sp, a, x, y, (sreg_t)o >> 28);
}
