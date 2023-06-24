#include "../common.h"
DEFINE_OP(slx5) {
	NEXT_OP(sp, a, x << 5, y, o);
}
