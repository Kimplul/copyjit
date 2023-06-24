#include "../common.h"
DEFINE_OP(bsx37) {
	NEXT_OP(sp, a, x >> 37, y, o);
}
