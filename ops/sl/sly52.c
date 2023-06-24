#include "../common.h"
DEFINE_OP(sly52) {
	NEXT_OP(sp, a, x, y << 52, o);
}
