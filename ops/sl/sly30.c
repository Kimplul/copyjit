#include "../common.h"
DEFINE_OP(sly30) {
	NEXT_OP(sp, a, x, y << 30, o);
}
