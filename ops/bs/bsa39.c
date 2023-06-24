#include "../common.h"
DEFINE_OP(bsa39) {
	NEXT_OP(sp, a >> 39, x, y, o);
}
