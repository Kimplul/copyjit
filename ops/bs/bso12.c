#include "../common.h"
DEFINE_OP(bso12) {
	NEXT_OP(sp, a, x, y, o >> 12);
}
