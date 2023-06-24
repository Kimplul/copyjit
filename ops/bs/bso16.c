#include "../common.h"
DEFINE_OP(bso16) {
	NEXT_OP(sp, a, x, y, o >> 16);
}
