#include "../common.h"
DEFINE_OP(sro20) {
	NEXT_OP(sp, a, x, y, (sreg_t)o >> 20);
}
