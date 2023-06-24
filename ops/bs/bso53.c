#include "../common.h"
DEFINE_OP(bso53) {
	NEXT_OP(sp, a, x, y, o >> 53);
}
