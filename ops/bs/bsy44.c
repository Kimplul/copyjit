#include "../common.h"
DEFINE_OP(bsy44) {
	NEXT_OP(sp, a, x, y >> 44, o);
}
