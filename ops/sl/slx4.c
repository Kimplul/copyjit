#include "../common.h"
DEFINE_OP(slx4) {
	NEXT_OP(sp, a, x << 4, y, o);
}
