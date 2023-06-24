#include "../common.h"
DEFINE_OP(bsy32) {
	NEXT_OP(sp, a, x, y >> 32, o);
}
