#include "../common.h"
DEFINE_OP(slx30) {
	NEXT_OP(sp, a, x << 30, y, o);
}
