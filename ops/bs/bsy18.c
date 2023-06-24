#include "../common.h"
DEFINE_OP(bsy18) {
	NEXT_OP(sp, a, x, y >> 18, o);
}
