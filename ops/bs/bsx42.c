#include "../common.h"
DEFINE_OP(bsx42) {
	NEXT_OP(sp, a, x >> 42, y, o);
}
