#include "../common.h"
DEFINE_OP(bsa2) {
	NEXT_OP(sp, a >> 2, x, y, o);
}
