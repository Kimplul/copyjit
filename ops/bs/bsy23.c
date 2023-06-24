#include "../common.h"
DEFINE_OP(bsy23) {
	NEXT_OP(sp, a, x, y >> 23, o);
}
