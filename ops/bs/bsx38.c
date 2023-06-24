#include "../common.h"
DEFINE_OP(bsx38) {
	NEXT_OP(sp, a, x >> 38, y, o);
}
