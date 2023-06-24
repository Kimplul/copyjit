#include "../common.h"
DEFINE_OP(bsy11) {
	NEXT_OP(sp, a, x, y >> 11, o);
}
