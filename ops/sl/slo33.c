#include "../common.h"
DEFINE_OP(slo33) {
	NEXT_OP(sp, a, x, y, o << 33);
}
