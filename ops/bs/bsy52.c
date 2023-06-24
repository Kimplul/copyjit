#include "../common.h"
DEFINE_OP(bsy52) {
	NEXT_OP(sp, a, x, y >> 52, o);
}
