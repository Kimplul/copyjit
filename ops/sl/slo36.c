#include "../common.h"
DEFINE_OP(slo36) {
	NEXT_OP(sp, a, x, y, o << 36);
}
