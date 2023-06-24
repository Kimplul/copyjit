#include "../common.h"
DEFINE_OP(slx55) {
	NEXT_OP(sp, a, x << 55, y, o);
}
