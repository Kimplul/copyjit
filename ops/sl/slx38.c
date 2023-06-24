#include "../common.h"
DEFINE_OP(slx38) {
	NEXT_OP(sp, a, x << 38, y, o);
}
