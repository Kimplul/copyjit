#include "../common.h"
DEFINE_OP(sro15) {
	NEXT_OP(sp, a, x, y, (sreg_t)o >> 15);
}
