#include "../common.h"
DEFINE_OP(slo50) {
	NEXT_OP(sp, a, x, y, o << 50);
}
