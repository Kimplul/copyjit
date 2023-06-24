#include "../common.h"
DEFINE_OP(sly42) {
	NEXT_OP(sp, a, x, y << 42, o);
}
