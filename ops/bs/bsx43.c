#include "../common.h"
DEFINE_OP(bsx43) {
	NEXT_OP(sp, a, x >> 43, y, o);
}
