#include "../common.h"
DEFINE_OP(sly53) {
	NEXT_OP(sp, a, x, y << 53, o);
}
