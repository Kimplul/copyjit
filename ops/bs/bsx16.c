#include "../common.h"
DEFINE_OP(bsx16) {
	NEXT_OP(sp, a, x >> 16, y, o);
}
