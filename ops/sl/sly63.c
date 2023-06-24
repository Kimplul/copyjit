#include "../common.h"
DEFINE_OP(sly63) {
	NEXT_OP(sp, a, x, y << 63, o);
}
