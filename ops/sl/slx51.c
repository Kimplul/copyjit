#include "../common.h"
DEFINE_OP(slx51) {
	NEXT_OP(sp, a, x << 51, y, o);
}
