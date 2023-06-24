#include "../common.h"
DEFINE_OP(sro26) {
	NEXT_OP(sp, a, x, y, (sreg_t)o >> 26);
}
