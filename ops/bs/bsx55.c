#include "../common.h"
DEFINE_OP(bsx55) {
	NEXT_OP(sp, a, x >> 55, y, o);
}
