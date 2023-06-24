#include "../common.h"
DEFINE_OP(bso2) {
	NEXT_OP(sp, a, x, y, o >> 2);
}
