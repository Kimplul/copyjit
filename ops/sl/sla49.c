#include "../common.h"
DEFINE_OP(sla49) {
	NEXT_OP(sp, a >> 49, x, y, o);
}
