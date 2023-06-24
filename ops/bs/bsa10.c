#include "../common.h"
DEFINE_OP(bsa10) {
	NEXT_OP(sp, a >> 10, x, y, o);
}
