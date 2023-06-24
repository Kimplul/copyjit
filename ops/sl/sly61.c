#include "../common.h"
DEFINE_OP(sly61) {
	NEXT_OP(sp, a, x, y << 61, o);
}
