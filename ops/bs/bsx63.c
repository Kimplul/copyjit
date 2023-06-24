#include "../common.h"
DEFINE_OP(bsx63) {
	NEXT_OP(sp, a, x >> 63, y, o);
}
