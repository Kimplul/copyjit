#include "../common.h"
DEFINE_OP(bsa21) {
	NEXT_OP(sp, a >> 21, x, y, o);
}
