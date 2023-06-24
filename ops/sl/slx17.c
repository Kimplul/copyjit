#include "../common.h"
DEFINE_OP(slx17) {
	NEXT_OP(sp, a, x << 17, y, o);
}
