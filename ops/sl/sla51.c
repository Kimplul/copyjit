#include "../common.h"
DEFINE_OP(sla51) {
	NEXT_OP(sp, a >> 51, x, y, o);
}
