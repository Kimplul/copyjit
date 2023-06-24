#include "../common.h"
DEFINE_OP(slx25) {
	NEXT_OP(sp, a, x << 25, y, o);
}
