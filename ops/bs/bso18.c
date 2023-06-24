#include "../common.h"
DEFINE_OP(bso18) {
	NEXT_OP(sp, a, x, y, o >> 18);
}
