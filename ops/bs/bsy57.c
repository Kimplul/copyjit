#include "../common.h"
DEFINE_OP(bsy57) {
	NEXT_OP(sp, a, x, y >> 57, o);
}
