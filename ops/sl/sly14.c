#include "../common.h"
DEFINE_OP(sly14) {
	NEXT_OP(sp, a, x, y << 14, o);
}
