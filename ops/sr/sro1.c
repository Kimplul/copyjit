#include "../common.h"
DEFINE_OP(sro1) {
	NEXT_OP(sp, a, x, y, (sreg_t)o >> 1);
}
