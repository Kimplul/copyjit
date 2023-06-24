#include "../common.h"
DEFINE_OP(bsx1) {
	NEXT_OP(sp, a, x >> 1, y, o);
}
