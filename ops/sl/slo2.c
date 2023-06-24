#include "../common.h"
DEFINE_OP(slo2) {
	NEXT_OP(sp, a, x, y, o << 2);
}
