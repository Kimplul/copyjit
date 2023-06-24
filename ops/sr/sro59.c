#include "../common.h"
DEFINE_OP(sro59) {
	NEXT_OP(sp, a, x, y, (sreg_t)o >> 59);
}
