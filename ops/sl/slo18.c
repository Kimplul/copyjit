#include "../common.h"
DEFINE_OP(slo18) {
	NEXT_OP(sp, a, x, y, o << 18);
}
