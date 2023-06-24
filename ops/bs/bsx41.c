#include "../common.h"
DEFINE_OP(bsx41) {
	NEXT_OP(sp, a, x >> 41, y, o);
}
