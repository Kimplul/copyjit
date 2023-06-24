#include "../common.h"
DEFINE_OP(slx53) {
	NEXT_OP(sp, a, x << 53, y, o);
}
