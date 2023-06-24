#include "../common.h"
DEFINE_OP(sla39) {
	NEXT_OP(sp, a >> 39, x, y, o);
}
