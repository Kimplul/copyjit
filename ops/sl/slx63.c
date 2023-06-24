#include "../common.h"
DEFINE_OP(slx63) {
	NEXT_OP(sp, a, x << 63, y, o);
}
