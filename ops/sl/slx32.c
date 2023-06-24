#include "../common.h"
DEFINE_OP(slx32) {
	NEXT_OP(sp, a, x << 32, y, o);
}
