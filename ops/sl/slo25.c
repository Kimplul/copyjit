#include "../common.h"
DEFINE_OP(slo25) {
	NEXT_OP(sp, a, x, y, o << 25);
}
