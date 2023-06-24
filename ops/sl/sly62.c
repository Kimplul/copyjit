#include "../common.h"
DEFINE_OP(sly62) {
	NEXT_OP(sp, a, x, y << 62, o);
}
