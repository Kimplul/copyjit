#include "../common.h"
DEFINE_OP(bsy28) {
	NEXT_OP(sp, a, x, y >> 28, o);
}
