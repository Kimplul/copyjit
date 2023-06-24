#include "../common.h"
DEFINE_OP(sly4) {
	NEXT_OP(sp, a, x, y << 4, o);
}
