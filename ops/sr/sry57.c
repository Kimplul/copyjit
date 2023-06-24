#include "../common.h"
DEFINE_OP(sry57) {
	NEXT_OP(sp, a, x, (sreg_t)y >> 57, o);
}
