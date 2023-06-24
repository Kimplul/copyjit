#include "../common.h"
DEFINE_OP(sro23) {
	NEXT_OP(sp, a, x, y, (sreg_t)o >> 23);
}
