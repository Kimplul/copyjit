#include "../common.h"
DEFINE_OP(slx56) {
	NEXT_OP(sp, a, x << 56, y, o);
}
