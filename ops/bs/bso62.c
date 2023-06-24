#include "../common.h"
DEFINE_OP(bso62) {
	NEXT_OP(sp, a, x, y, o >> 62);
}
