#include "../common.h"
DEFINE_OP(slx34) {
	NEXT_OP(sp, a, x << 34, y, o);
}
