#include "../common.h"
DEFINE_OP(sly15) {
	NEXT_OP(sp, a, x, y << 15, o);
}
