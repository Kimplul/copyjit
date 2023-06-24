#include "../common.h"
DEFINE_OP(srx59) {
	NEXT_OP(sp, a, (sreg_t)x >> 59, y, o);
}
