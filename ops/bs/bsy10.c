#include "../common.h"
DEFINE_OP(bsy10) {
	NEXT_OP(sp, a, x, y >> 10, o);
}
