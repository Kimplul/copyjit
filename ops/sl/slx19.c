#include "../common.h"
DEFINE_OP(slx19) {
	NEXT_OP(sp, a, x << 19, y, o);
}
