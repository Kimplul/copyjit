#include "../common.h"
DEFINE_OP(slx52) {
	NEXT_OP(sp, a, x << 52, y, o);
}
