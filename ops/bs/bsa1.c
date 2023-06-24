#include "../common.h"
DEFINE_OP(bsa1) {
	NEXT_OP(sp, a >> 1, x, y, o);
}
