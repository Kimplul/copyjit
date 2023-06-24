#include "../common.h"
DEFINE_OP(bsa19) {
	NEXT_OP(sp, a >> 19, x, y, o);
}
