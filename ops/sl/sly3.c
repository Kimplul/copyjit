#include "../common.h"
DEFINE_OP(sly3) {
	NEXT_OP(sp, a, x, y << 3, o);
}
