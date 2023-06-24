#include "../common.h"
DEFINE_OP(sla28) {
	NEXT_OP(sp, a >> 28, x, y, o);
}
