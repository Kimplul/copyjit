#include "../common.h"
DEFINE_OP(bso50) {
	NEXT_OP(sp, a, x, y, o >> 50);
}
