#include "../common.h"
DEFINE_OP(sro4) {
	NEXT_OP(sp, a, x, y, (sreg_t)o >> 4);
}
