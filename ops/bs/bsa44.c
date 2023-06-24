#include "../common.h"
DEFINE_OP(bsa44) {
	NEXT_OP(sp, a >> 44, x, y, o);
}
