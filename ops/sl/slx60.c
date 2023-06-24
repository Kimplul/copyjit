#include "../common.h"
DEFINE_OP(slx60) {
	NEXT_OP(sp, a, x << 60, y, o);
}
