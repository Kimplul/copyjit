#include "../common.h"
DEFINE_OP(bsy62) {
	NEXT_OP(sp, a, x, y >> 62, o);
}
