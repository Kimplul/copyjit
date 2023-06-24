#include "../common.h"
DEFINE_OP(sro50) {
	NEXT_OP(sp, a, x, y, (sreg_t)o >> 50);
}
