#include "../common.h"
DEFINE_OP(bsx60) {
	NEXT_OP(sp, a, x >> 60, y, o);
}
