#include "../common.h"
DEFINE_OP(bsa4) {
	NEXT_OP(sp, a >> 4, x, y, o);
}
