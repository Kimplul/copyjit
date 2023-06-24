#include "../common.h"
DEFINE_OP(bsx8) {
	NEXT_OP(sp, a, x >> 8, y, o);
}
