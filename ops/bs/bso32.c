#include "../common.h"
DEFINE_OP(bso32) {
	NEXT_OP(sp, a, x, y, o >> 32);
}
