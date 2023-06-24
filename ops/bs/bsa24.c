#include "../common.h"
DEFINE_OP(bsa24) {
	NEXT_OP(sp, a >> 24, x, y, o);
}
