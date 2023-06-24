#include "../common.h"
DEFINE_OP(srx5) {
	NEXT_OP(sp, a, (sreg_t)x >> 5, y, o);
}
