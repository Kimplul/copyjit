#include "../common.h"
DEFINE_OP(sla26) {
	NEXT_OP(sp, a >> 26, x, y, o);
}
