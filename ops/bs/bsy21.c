#include "../common.h"
DEFINE_OP(bsy21) {
	NEXT_OP(sp, a, x, y >> 21, o);
}
