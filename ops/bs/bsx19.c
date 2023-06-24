#include "../common.h"
DEFINE_OP(bsx19) {
	NEXT_OP(sp, a, x >> 19, y, o);
}
