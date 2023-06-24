#include "../common.h"
DEFINE_OP(sro13) {
	NEXT_OP(sp, a, x, y, (sreg_t)o >> 13);
}
