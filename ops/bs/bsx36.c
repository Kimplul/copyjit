#include "../common.h"
DEFINE_OP(bsx36) {
	NEXT_OP(sp, a, x >> 36, y, o);
}
