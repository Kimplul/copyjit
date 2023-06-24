#include "../common.h"
DEFINE_OP(bso58) {
	NEXT_OP(sp, a, x, y, o >> 58);
}
