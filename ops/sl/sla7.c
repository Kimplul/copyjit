#include "../common.h"
DEFINE_OP(sla7) {
	NEXT_OP(sp, a >> 7, x, y, o);
}
