#include "../common.h"
DEFINE_OP(bso10) {
	NEXT_OP(sp, a, x, y, o >> 10);
}
