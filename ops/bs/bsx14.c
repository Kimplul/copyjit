#include "../common.h"
DEFINE_OP(bsx14) {
	NEXT_OP(sp, a, x >> 14, y, o);
}
