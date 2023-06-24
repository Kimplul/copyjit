#include "../common.h"
DEFINE_OP(bsx40) {
	NEXT_OP(sp, a, x >> 40, y, o);
}
