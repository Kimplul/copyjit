#include "../common.h"
DEFINE_OP(bsy41) {
	NEXT_OP(sp, a, x, y >> 41, o);
}
