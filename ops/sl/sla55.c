#include "../common.h"
DEFINE_OP(sla55) {
	NEXT_OP(sp, a >> 55, x, y, o);
}
