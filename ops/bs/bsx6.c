#include "../common.h"
DEFINE_OP(bsx6) {
	NEXT_OP(sp, a, x >> 6, y, o);
}
