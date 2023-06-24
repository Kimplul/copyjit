#include "../common.h"
DEFINE_OP(slx21) {
	NEXT_OP(sp, a, x << 21, y, o);
}
