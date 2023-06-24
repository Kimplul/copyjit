#include "../common.h"
DEFINE_OP(bsy45) {
	NEXT_OP(sp, a, x, y >> 45, o);
}
