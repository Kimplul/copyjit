#include "../common.h"
DEFINE_OP(bsa5) {
	NEXT_OP(sp, a >> 5, x, y, o);
}
