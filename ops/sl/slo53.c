#include "../common.h"
DEFINE_OP(slo53) {
	NEXT_OP(sp, a, x, y, o << 53);
}
