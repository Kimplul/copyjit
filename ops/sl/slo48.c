#include "../common.h"
DEFINE_OP(slo48) {
	NEXT_OP(sp, a, x, y, o << 48);
}
