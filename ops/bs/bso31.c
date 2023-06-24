#include "../common.h"
DEFINE_OP(bso31) {
	NEXT_OP(sp, a, x, y, o >> 31);
}
