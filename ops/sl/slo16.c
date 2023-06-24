#include "../common.h"
DEFINE_OP(slo16) {
	NEXT_OP(sp, a, x, y, o << 16);
}
