#include "../common.h"
DEFINE_OP(sro17) {
	NEXT_OP(sp, a, x, y, (sreg_t)o >> 17);
}
