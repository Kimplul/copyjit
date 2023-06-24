#include "../common.h"
DEFINE_OP(bsy20) {
	NEXT_OP(sp, a, x, y >> 20, o);
}
