#include "../common.h"
DEFINE_OP(bsx9) {
	NEXT_OP(sp, a, x >> 9, y, o);
}
