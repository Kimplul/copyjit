#include "../common.h"
DEFINE_OP(slx41) {
	NEXT_OP(sp, a, x << 41, y, o);
}
