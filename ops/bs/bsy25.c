#include "../common.h"
DEFINE_OP(bsy25) {
	NEXT_OP(sp, a, x, y >> 25, o);
}
