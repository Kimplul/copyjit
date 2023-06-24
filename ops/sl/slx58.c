#include "../common.h"
DEFINE_OP(slx58) {
	NEXT_OP(sp, a, x << 58, y, o);
}
