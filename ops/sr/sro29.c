#include "../common.h"
DEFINE_OP(sro29) {
	NEXT_OP(sp, a, x, y, (sreg_t)o >> 29);
}
