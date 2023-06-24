#include "../common.h"
DEFINE_OP(sro53) {
	NEXT_OP(sp, a, x, y, (sreg_t)o >> 53);
}
