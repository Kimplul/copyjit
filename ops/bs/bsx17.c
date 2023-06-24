#include "../common.h"
DEFINE_OP(bsx17) {
	NEXT_OP(sp, a, x >> 17, y, o);
}
