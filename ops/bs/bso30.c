#include "../common.h"
DEFINE_OP(bso30) {
	NEXT_OP(sp, a, x, y, o >> 30);
}
