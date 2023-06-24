#include "../common.h"
DEFINE_OP(slx10) {
	NEXT_OP(sp, a, x << 10, y, o);
}
