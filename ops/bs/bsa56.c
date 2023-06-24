#include "../common.h"
DEFINE_OP(bsa56) {
	NEXT_OP(sp, a >> 56, x, y, o);
}
