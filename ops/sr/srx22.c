#include "../common.h"
DEFINE_OP(srx22) {
	NEXT_OP(sp, a, (sreg_t)x >> 22, y, o);
}
