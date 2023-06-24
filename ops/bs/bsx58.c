#include "../common.h"
DEFINE_OP(bsx58) {
	NEXT_OP(sp, a, x >> 58, y, o);
}
