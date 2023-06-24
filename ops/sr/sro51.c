#include "../common.h"
DEFINE_OP(sro51) {
	NEXT_OP(sp, a, x, y, (sreg_t)o >> 51);
}
