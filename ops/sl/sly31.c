#include "../common.h"
DEFINE_OP(sly31) {
	NEXT_OP(sp, a, x, y << 31, o);
}
