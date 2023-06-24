#include "../common.h"
DEFINE_OP(sly5) {
	NEXT_OP(sp, a, x, y << 5, o);
}
