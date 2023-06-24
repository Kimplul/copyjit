#include "../common.h"
DEFINE_OP(slo10) {
	NEXT_OP(sp, a, x, y, o << 10);
}
