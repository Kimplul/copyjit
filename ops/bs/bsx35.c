#include "../common.h"
DEFINE_OP(bsx35) {
	NEXT_OP(sp, a, x >> 35, y, o);
}
