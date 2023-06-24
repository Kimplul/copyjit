#include "../common.h"
DEFINE_OP(sro19) {
	NEXT_OP(sp, a, x, y, (sreg_t)o >> 19);
}
