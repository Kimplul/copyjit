#include "../common.h"
DEFINE_OP(bsy54) {
	NEXT_OP(sp, a, x, y >> 54, o);
}
