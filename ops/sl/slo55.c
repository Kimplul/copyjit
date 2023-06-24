#include "../common.h"
DEFINE_OP(slo55) {
	NEXT_OP(sp, a, x, y, o << 55);
}
