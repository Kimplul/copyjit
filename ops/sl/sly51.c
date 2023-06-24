#include "../common.h"
DEFINE_OP(sly51) {
	NEXT_OP(sp, a, x, y << 51, o);
}
