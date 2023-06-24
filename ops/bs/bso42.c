#include "../common.h"
DEFINE_OP(bso42) {
	NEXT_OP(sp, a, x, y, o >> 42);
}
