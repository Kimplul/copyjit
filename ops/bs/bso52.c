#include "../common.h"
DEFINE_OP(bso52) {
	NEXT_OP(sp, a, x, y, o >> 52);
}
