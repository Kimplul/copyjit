#include "../common.h"
DEFINE_OP(sla8) {
	NEXT_OP(sp, a >> 8, x, y, o);
}
