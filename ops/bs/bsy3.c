#include "../common.h"
DEFINE_OP(bsy3) {
	NEXT_OP(sp, a, x, y >> 3, o);
}
