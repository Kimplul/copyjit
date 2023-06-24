#include "../common.h"
DEFINE_OP(bsy16) {
	NEXT_OP(sp, a, x, y >> 16, o);
}
