#include "../common.h"
DEFINE_OP(bsy56) {
	NEXT_OP(sp, a, x, y >> 56, o);
}
