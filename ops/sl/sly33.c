#include "../common.h"
DEFINE_OP(sly33) {
	NEXT_OP(sp, a, x, y << 33, o);
}
