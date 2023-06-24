#include "../common.h"
DEFINE_OP(slx11) {
	NEXT_OP(sp, a, x << 11, y, o);
}
