#include "../common.h"
DEFINE_OP(sro6) {
	NEXT_OP(sp, a, x, y, (sreg_t)o >> 6);
}
