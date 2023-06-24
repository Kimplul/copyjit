#include "../common.h"
DEFINE_OP(bso25) {
	NEXT_OP(sp, a, x, y, o >> 25);
}
