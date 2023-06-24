#include "../common.h"
DEFINE_OP(bsy48) {
	NEXT_OP(sp, a, x, y >> 48, o);
}
