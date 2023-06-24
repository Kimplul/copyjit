#include "../common.h"
DEFINE_OP(sly22) {
	NEXT_OP(sp, a, x, y << 22, o);
}
