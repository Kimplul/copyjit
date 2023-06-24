#include "../common.h"
DEFINE_OP(slx20) {
	NEXT_OP(sp, a, x << 20, y, o);
}
