#include "../common.h"
DEFINE_OP(bsx23) {
	NEXT_OP(sp, a, x >> 23, y, o);
}
