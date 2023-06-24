#include "../common.h"
DEFINE_OP(slo23) {
	NEXT_OP(sp, a, x, y, o << 23);
}
