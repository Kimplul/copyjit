#include "../common.h"
DEFINE_OP(bsx51) {
	NEXT_OP(sp, a, x >> 51, y, o);
}
