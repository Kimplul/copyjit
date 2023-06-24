#include "../common.h"
DEFINE_OP(bsx48) {
	NEXT_OP(sp, a, x >> 48, y, o);
}
