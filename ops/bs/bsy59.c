#include "../common.h"
DEFINE_OP(bsy59) {
	NEXT_OP(sp, a, x, y >> 59, o);
}
