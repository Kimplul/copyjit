#include "../common.h"
DEFINE_OP(bsy1) {
	NEXT_OP(sp, a, x, y >> 1, o);
}
