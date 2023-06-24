#include "../common.h"
DEFINE_OP(srx46) {
	NEXT_OP(sp, a, (sreg_t)x >> 46, y, o);
}
