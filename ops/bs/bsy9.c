#include "../common.h"
DEFINE_OP(bsy9) {
	NEXT_OP(sp, a, x, y >> 9, o);
}
