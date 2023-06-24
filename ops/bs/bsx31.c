#include "../common.h"
DEFINE_OP(bsx31) {
	NEXT_OP(sp, a, x >> 31, y, o);
}
