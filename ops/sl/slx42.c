#include "../common.h"
DEFINE_OP(slx42) {
	NEXT_OP(sp, a, x << 42, y, o);
}
