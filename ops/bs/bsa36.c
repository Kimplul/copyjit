#include "../common.h"
DEFINE_OP(bsa36) {
	NEXT_OP(sp, a >> 36, x, y, o);
}
