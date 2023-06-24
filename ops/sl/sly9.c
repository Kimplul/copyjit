#include "../common.h"
DEFINE_OP(sly9) {
	NEXT_OP(sp, a, x, y << 9, o);
}
