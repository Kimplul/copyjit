#include "../common.h"
DEFINE_OP(slo31) {
	NEXT_OP(sp, a, x, y, o << 31);
}
