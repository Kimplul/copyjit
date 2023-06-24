#include "../common.h"
DEFINE_OP(sly24) {
	NEXT_OP(sp, a, x, y << 24, o);
}
