#include "../common.h"
DEFINE_OP(bsy58) {
	NEXT_OP(sp, a, x, y >> 58, o);
}
