#include "../common.h"
DEFINE_OP(slo26) {
	NEXT_OP(sp, a, x, y, o << 26);
}
