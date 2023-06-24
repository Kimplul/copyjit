#include "../common.h"
DEFINE_OP(sly18) {
	NEXT_OP(sp, a, x, y << 18, o);
}
