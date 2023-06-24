#include "../common.h"
DEFINE_OP(slx7) {
	NEXT_OP(sp, a, x << 7, y, o);
}
