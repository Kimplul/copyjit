#include "../common.h"
DEFINE_OP(bsy4) {
	NEXT_OP(sp, a, x, y >> 4, o);
}
