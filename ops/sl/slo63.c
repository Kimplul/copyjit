#include "../common.h"
DEFINE_OP(slo63) {
	NEXT_OP(sp, a, x, y, o << 63);
}
