#include "../common.h"
DEFINE_OP(bsy6) {
	NEXT_OP(sp, a, x, y >> 6, o);
}
