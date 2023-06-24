#include "../common.h"
DEFINE_OP(bsx44) {
	NEXT_OP(sp, a, x >> 44, y, o);
}
