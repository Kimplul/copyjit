#include "../common.h"
DEFINE_OP(sly26) {
	NEXT_OP(sp, a, x, y << 26, o);
}
