#include "../common.h"
DEFINE_OP(slx23) {
	NEXT_OP(sp, a, x << 23, y, o);
}
