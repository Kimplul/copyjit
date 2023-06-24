#include "../common.h"
DEFINE_OP(bsx56) {
	NEXT_OP(sp, a, x >> 56, y, o);
}
