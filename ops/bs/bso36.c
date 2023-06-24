#include "../common.h"
DEFINE_OP(bso36) {
	NEXT_OP(sp, a, x, y, o >> 36);
}
