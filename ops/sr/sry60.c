#include "../common.h"
DEFINE_OP(sry60) {
	NEXT_OP(sp, a, x, (sreg_t)y >> 60, o);
}
