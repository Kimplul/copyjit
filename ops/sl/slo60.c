#include "../common.h"
DEFINE_OP(slo60) {
	NEXT_OP(sp, a, x, y, o << 60);
}
