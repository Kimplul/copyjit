#include "../common.h"
DEFINE_OP(sla14) {
	NEXT_OP(sp, a >> 14, x, y, o);
}
