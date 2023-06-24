#include "../common.h"
DEFINE_OP(bsx30) {
	NEXT_OP(sp, a, x >> 30, y, o);
}
