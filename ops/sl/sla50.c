#include "../common.h"
DEFINE_OP(sla50) {
	NEXT_OP(sp, a >> 50, x, y, o);
}
