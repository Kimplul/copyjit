#include "../common.h"
DEFINE_OP(bsx59) {
	NEXT_OP(sp, a, x >> 59, y, o);
}
