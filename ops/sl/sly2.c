#include "../common.h"
DEFINE_OP(sly2) {
	NEXT_OP(sp, a, x, y << 2, o);
}
