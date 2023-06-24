#include "../common.h"
DEFINE_OP(slo3) {
	NEXT_OP(sp, a, x, y, o << 3);
}
