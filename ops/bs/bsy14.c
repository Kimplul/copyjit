#include "../common.h"
DEFINE_OP(bsy14) {
	NEXT_OP(sp, a, x, y >> 14, o);
}
