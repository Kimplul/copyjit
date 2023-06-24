#include "../common.h"
DEFINE_OP(slx24) {
	NEXT_OP(sp, a, x << 24, y, o);
}
