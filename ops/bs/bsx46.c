#include "../common.h"
DEFINE_OP(bsx46) {
	NEXT_OP(sp, a, x >> 46, y, o);
}
