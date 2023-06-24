#include "../common.h"
DEFINE_OP(sla10) {
	NEXT_OP(sp, a >> 10, x, y, o);
}
