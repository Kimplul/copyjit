#include "../common.h"
DEFINE_OP(sry41) {
	NEXT_OP(sp, a, x, (sreg_t)y >> 41, o);
}
