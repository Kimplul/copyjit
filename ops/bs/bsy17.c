#include "../common.h"
DEFINE_OP(bsy17) {
	NEXT_OP(sp, a, x, y >> 17, o);
}
