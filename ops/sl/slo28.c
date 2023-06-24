#include "../common.h"
DEFINE_OP(slo28) {
	NEXT_OP(sp, a, x, y, o << 28);
}
