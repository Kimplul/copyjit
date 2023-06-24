#include "../common.h"
DEFINE_OP(bsa61) {
	NEXT_OP(sp, a >> 61, x, y, o);
}
