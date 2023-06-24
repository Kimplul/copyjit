#include "../common.h"
DEFINE_OP(bso24) {
	NEXT_OP(sp, a, x, y, o >> 24);
}
