#include "../common.h"
DEFINE_OP(sla48) {
	NEXT_OP(sp, a >> 48, x, y, o);
}
