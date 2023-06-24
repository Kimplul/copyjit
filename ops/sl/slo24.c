#include "../common.h"
DEFINE_OP(slo24) {
	NEXT_OP(sp, a, x, y, o << 24);
}
