#include "../common.h"
DEFINE_OP(sry34) {
	NEXT_OP(sp, a, x, (sreg_t)y >> 34, o);
}
