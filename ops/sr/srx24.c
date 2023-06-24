#include "../common.h"
DEFINE_OP(srx24) {
	NEXT_OP(sp, a, (sreg_t)x >> 24, y, o);
}
