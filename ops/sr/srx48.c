#include "../common.h"
DEFINE_OP(srx48) {
	NEXT_OP(sp, a, (sreg_t)x >> 48, y, o);
}
