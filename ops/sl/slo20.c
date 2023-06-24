#include "../common.h"
DEFINE_OP(slo20) {
	NEXT_OP(sp, a, x, y, o << 20);
}
