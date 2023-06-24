#include "../common.h"
DEFINE_OP(bsy8) {
	NEXT_OP(sp, a, x, y >> 8, o);
}
