#include "../common.h"
DEFINE_OP(sla5) {
	NEXT_OP(sp, a >> 5, x, y, o);
}
