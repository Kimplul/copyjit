#include "../common.h"
DEFINE_OP(bsa8) {
	NEXT_OP(sp, a >> 8, x, y, o);
}
