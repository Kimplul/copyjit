#include "../common.h"
DEFINE_OP(slo30) {
	NEXT_OP(sp, a, x, y, o << 30);
}
