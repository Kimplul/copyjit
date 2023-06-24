#include "../common.h"
DEFINE_OP(bsy22) {
	NEXT_OP(sp, a, x, y >> 22, o);
}
