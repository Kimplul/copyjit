#include "../common.h"
DEFINE_OP(sla13) {
	NEXT_OP(sp, a >> 13, x, y, o);
}
