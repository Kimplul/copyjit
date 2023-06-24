#include "../common.h"
DEFINE_OP(bso23) {
	NEXT_OP(sp, a, x, y, o >> 23);
}
