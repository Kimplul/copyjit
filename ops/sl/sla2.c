#include "../common.h"
DEFINE_OP(sla2) {
	NEXT_OP(sp, a >> 2, x, y, o);
}
