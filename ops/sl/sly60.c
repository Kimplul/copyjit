#include "../common.h"
DEFINE_OP(sly60) {
	NEXT_OP(sp, a, x, y << 60, o);
}
