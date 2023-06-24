#include "../common.h"
DEFINE_OP(bso15) {
	NEXT_OP(sp, a, x, y, o >> 15);
}
