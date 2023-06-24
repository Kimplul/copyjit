#include "../common.h"
DEFINE_OP(slx28) {
	NEXT_OP(sp, a, x << 28, y, o);
}
