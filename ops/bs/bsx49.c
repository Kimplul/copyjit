#include "../common.h"
DEFINE_OP(bsx49) {
	NEXT_OP(sp, a, x >> 49, y, o);
}
