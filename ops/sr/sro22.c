#include "../common.h"
DEFINE_OP(sro22) {
	NEXT_OP(sp, a, x, y, (sreg_t)o >> 22);
}
