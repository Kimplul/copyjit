#include "../common.h"
DEFINE_OP(bsy40) {
	NEXT_OP(sp, a, x, y >> 40, o);
}
