#include "../common.h"
DEFINE_OP(slo15) {
	NEXT_OP(sp, a, x, y, o << 15);
}
