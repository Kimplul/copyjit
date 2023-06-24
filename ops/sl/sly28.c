#include "../common.h"
DEFINE_OP(sly28) {
	NEXT_OP(sp, a, x, y << 28, o);
}
