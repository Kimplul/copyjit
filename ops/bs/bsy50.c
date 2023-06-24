#include "../common.h"
DEFINE_OP(bsy50) {
	NEXT_OP(sp, a, x, y >> 50, o);
}
