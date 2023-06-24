#include "../common.h"
DEFINE_OP(srx47) {
	NEXT_OP(sp, a, (sreg_t)x >> 47, y, o);
}
