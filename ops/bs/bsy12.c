#include "../common.h"
DEFINE_OP(bsy12) {
	NEXT_OP(sp, a, x, y >> 12, o);
}
