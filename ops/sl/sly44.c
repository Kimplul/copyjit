#include "../common.h"
DEFINE_OP(sly44) {
	NEXT_OP(sp, a, x, y << 44, o);
}
