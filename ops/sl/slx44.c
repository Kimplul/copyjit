#include "../common.h"
DEFINE_OP(slx44) {
	NEXT_OP(sp, a, x << 44, y, o);
}
