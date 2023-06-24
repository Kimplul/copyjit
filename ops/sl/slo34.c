#include "../common.h"
DEFINE_OP(slo34) {
	NEXT_OP(sp, a, x, y, o << 34);
}
