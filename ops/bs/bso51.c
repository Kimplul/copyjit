#include "../common.h"
DEFINE_OP(bso51) {
	NEXT_OP(sp, a, x, y, o >> 51);
}
