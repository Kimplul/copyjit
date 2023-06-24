#include "../common.h"
DEFINE_OP(sla11) {
	NEXT_OP(sp, a >> 11, x, y, o);
}
