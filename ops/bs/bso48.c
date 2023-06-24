#include "../common.h"
DEFINE_OP(bso48) {
	NEXT_OP(sp, a, x, y, o >> 48);
}
