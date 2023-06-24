#include "../common.h"
DEFINE_OP(bsa11) {
	NEXT_OP(sp, a >> 11, x, y, o);
}
