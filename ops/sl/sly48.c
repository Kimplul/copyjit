#include "../common.h"
DEFINE_OP(sly48) {
	NEXT_OP(sp, a, x, y << 48, o);
}
