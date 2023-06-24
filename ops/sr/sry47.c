#include "../common.h"
DEFINE_OP(sry47) {
	NEXT_OP(sp, a, x, (sreg_t)y >> 47, o);
}
