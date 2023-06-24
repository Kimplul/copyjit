#include "../common.h"
DEFINE_OP(bsa25) {
	NEXT_OP(sp, a >> 25, x, y, o);
}
