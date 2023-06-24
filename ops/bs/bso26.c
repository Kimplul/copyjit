#include "../common.h"
DEFINE_OP(bso26) {
	NEXT_OP(sp, a, x, y, o >> 26);
}
