#include "../common.h"
DEFINE_OP(sro33) {
	NEXT_OP(sp, a, x, y, (sreg_t)o >> 33);
}
