#include "../common.h"
DEFINE_OP(slo12) {
	NEXT_OP(sp, a, x, y, o << 12);
}
