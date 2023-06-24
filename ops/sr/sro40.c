#include "../common.h"
DEFINE_OP(sro40) {
	NEXT_OP(sp, a, x, y, (sreg_t)o >> 40);
}
