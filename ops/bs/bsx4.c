#include "../common.h"
DEFINE_OP(bsx4) {
	NEXT_OP(sp, a, x >> 4, y, o);
}
