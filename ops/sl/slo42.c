#include "../common.h"
DEFINE_OP(slo42) {
	NEXT_OP(sp, a, x, y, o << 42);
}
