#include "../common.h"
DEFINE_OP(sro47) {
	NEXT_OP(sp, a, x, y, (sreg_t)o >> 47);
}
