#include "../common.h"
DEFINE_OP(slx54) {
	NEXT_OP(sp, a, x << 54, y, o);
}
