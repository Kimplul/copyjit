#include "../common.h"
DEFINE_OP(bsa15) {
	NEXT_OP(sp, a >> 15, x, y, o);
}
