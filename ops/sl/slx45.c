#include "../common.h"
DEFINE_OP(slx45) {
	NEXT_OP(sp, a, x << 45, y, o);
}
