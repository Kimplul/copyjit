#include "../common.h"
DEFINE_OP(bsa58) {
	NEXT_OP(sp, a >> 58, x, y, o);
}
