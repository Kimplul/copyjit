#include "../common.h"
DEFINE_OP(bsx0) {
	NEXT_OP(sp, a, x >> 0, y, o);
}
