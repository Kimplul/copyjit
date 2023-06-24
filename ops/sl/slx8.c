#include "../common.h"
DEFINE_OP(slx8) {
	NEXT_OP(sp, a, x << 8, y, o);
}
