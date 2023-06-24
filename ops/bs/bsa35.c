#include "../common.h"
DEFINE_OP(bsa35) {
	NEXT_OP(sp, a >> 35, x, y, o);
}
