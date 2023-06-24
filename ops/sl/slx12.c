#include "../common.h"
DEFINE_OP(slx12) {
	NEXT_OP(sp, a, x << 12, y, o);
}
