#include "../common.h"
DEFINE_OP(bsy24) {
	NEXT_OP(sp, a, x, y >> 24, o);
}
