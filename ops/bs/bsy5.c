#include "../common.h"
DEFINE_OP(bsy5) {
	NEXT_OP(sp, a, x, y >> 5, o);
}
