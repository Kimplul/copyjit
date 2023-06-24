#include "../common.h"
DEFINE_OP(bsa6) {
	NEXT_OP(sp, a >> 6, x, y, o);
}
