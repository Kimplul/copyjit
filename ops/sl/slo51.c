#include "../common.h"
DEFINE_OP(slo51) {
	NEXT_OP(sp, a, x, y, o << 51);
}
