#include "../common.h"
DEFINE_OP(bsy19) {
	NEXT_OP(sp, a, x, y >> 19, o);
}
