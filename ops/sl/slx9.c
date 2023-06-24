#include "../common.h"
DEFINE_OP(slx9) {
	NEXT_OP(sp, a, x << 9, y, o);
}
