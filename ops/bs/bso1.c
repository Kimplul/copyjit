#include "../common.h"
DEFINE_OP(bso1) {
	NEXT_OP(sp, a, x, y, o >> 1);
}
