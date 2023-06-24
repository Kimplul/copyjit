#include "../common.h"
DEFINE_OP(sly38) {
	NEXT_OP(sp, a, x, y << 38, o);
}
