#include "../common.h"
DEFINE_OP(sro8) {
	NEXT_OP(sp, a, x, y, (sreg_t)o >> 8);
}
