#include "../common.h"
DEFINE_OP(bsx57) {
	NEXT_OP(sp, a, x >> 57, y, o);
}
