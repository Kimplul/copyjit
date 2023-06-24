#include "../common.h"
DEFINE_OP(slx29) {
	NEXT_OP(sp, a, x << 29, y, o);
}
