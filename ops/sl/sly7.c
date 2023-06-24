#include "../common.h"
DEFINE_OP(sly7) {
	NEXT_OP(sp, a, x, y << 7, o);
}
