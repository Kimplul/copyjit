#include "../common.h"
DEFINE_OP(bso20) {
	NEXT_OP(sp, a, x, y, o >> 20);
}
