#include "../common.h"
DEFINE_OP(sla23) {
	NEXT_OP(sp, a >> 23, x, y, o);
}
