#include "../common.h"
DEFINE_OP(bsx50) {
	NEXT_OP(sp, a, x >> 50, y, o);
}
