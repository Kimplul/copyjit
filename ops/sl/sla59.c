#include "../common.h"
DEFINE_OP(sla59) {
	NEXT_OP(sp, a >> 59, x, y, o);
}
