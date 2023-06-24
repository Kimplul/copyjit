#include "../common.h"
DEFINE_OP(slx26) {
	NEXT_OP(sp, a, x << 26, y, o);
}
