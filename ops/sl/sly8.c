#include "../common.h"
DEFINE_OP(sly8) {
	NEXT_OP(sp, a, x, y << 8, o);
}
