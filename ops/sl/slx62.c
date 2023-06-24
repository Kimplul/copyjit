#include "../common.h"
DEFINE_OP(slx62) {
	NEXT_OP(sp, a, x << 62, y, o);
}
