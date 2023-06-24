#include "../common.h"
DEFINE_OP(bsa31) {
	NEXT_OP(sp, a >> 31, x, y, o);
}
