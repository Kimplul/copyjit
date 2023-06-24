#include "../common.h"
DEFINE_OP(bsa62) {
	NEXT_OP(sp, a >> 62, x, y, o);
}
