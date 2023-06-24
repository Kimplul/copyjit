#include "../common.h"
DEFINE_OP(sla16) {
	NEXT_OP(sp, a >> 16, x, y, o);
}
