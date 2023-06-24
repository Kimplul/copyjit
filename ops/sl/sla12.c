#include "../common.h"
DEFINE_OP(sla12) {
	NEXT_OP(sp, a >> 12, x, y, o);
}
