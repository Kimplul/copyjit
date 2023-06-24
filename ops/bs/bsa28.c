#include "../common.h"
DEFINE_OP(bsa28) {
	NEXT_OP(sp, a >> 28, x, y, o);
}
