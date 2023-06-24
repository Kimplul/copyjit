#include "../common.h"
DEFINE_OP(slx27) {
	NEXT_OP(sp, a, x << 27, y, o);
}
