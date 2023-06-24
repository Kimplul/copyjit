#include "../common.h"
DEFINE_OP(bsx20) {
	NEXT_OP(sp, a, x >> 20, y, o);
}
