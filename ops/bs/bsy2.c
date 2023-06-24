#include "../common.h"
DEFINE_OP(bsy2) {
	NEXT_OP(sp, a, x, y >> 2, o);
}
