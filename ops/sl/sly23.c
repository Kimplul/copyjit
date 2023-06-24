#include "../common.h"
DEFINE_OP(sly23) {
	NEXT_OP(sp, a, x, y << 23, o);
}
