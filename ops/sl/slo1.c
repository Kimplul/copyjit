#include "../common.h"
DEFINE_OP(slo1) {
	NEXT_OP(sp, a, x, y, o << 1);
}
