#include "../common.h"
DEFINE_OP(sly21) {
	NEXT_OP(sp, a, x, y << 21, o);
}
