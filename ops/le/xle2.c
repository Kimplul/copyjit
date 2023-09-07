#include "../common.h"

DEFINE_OP(xle2) {
	NEXT_OP(sp, x <= 2, x, y, o);
}
