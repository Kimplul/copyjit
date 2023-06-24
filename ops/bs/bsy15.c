#include "../common.h"
DEFINE_OP(bsy15) {
	NEXT_OP(sp, a, x, y >> 15, o);
}
