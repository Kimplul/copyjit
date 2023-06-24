#include "../common.h"
DEFINE_OP(sro60) {
	NEXT_OP(sp, a, x, y, (sreg_t)o >> 60);
}
