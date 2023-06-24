#include "../common.h"
DEFINE_OP(sro45) {
	NEXT_OP(sp, a, x, y, (sreg_t)o >> 45);
}
