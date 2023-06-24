#include "../common.h"
DEFINE_OP(bso33) {
	NEXT_OP(sp, a, x, y, o >> 33);
}
