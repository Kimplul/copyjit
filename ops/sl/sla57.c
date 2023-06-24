#include "../common.h"
DEFINE_OP(sla57) {
	NEXT_OP(sp, a >> 57, x, y, o);
}
