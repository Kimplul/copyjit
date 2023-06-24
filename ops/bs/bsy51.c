#include "../common.h"
DEFINE_OP(bsy51) {
	NEXT_OP(sp, a, x, y >> 51, o);
}
