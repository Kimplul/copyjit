#include "../common.h"
DEFINE_OP(slo22) {
	NEXT_OP(sp, a, x, y, o << 22);
}
