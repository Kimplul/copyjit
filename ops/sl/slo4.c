#include "../common.h"
DEFINE_OP(slo4) {
	NEXT_OP(sp, a, x, y, o << 4);
}
