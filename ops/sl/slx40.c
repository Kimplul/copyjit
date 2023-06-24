#include "../common.h"
DEFINE_OP(slx40) {
	NEXT_OP(sp, a, x << 40, y, o);
}
