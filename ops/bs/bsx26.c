#include "../common.h"
DEFINE_OP(bsx26) {
	NEXT_OP(sp, a, x >> 26, y, o);
}
