#include "../common.h"
DEFINE_OP(bso63) {
	NEXT_OP(sp, a, x, y, o >> 63);
}
