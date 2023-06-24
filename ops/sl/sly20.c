#include "../common.h"
DEFINE_OP(sly20) {
	NEXT_OP(sp, a, x, y << 20, o);
}
