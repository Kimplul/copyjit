#include "../common.h"
DEFINE_OP(bsx2) {
	NEXT_OP(sp, a, x >> 2, y, o);
}
