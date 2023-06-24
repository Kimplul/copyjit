#include "../common.h"
DEFINE_OP(sro48) {
	NEXT_OP(sp, a, x, y, (sreg_t)o >> 48);
}
