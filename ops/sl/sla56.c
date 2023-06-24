#include "../common.h"
DEFINE_OP(sla56) {
	NEXT_OP(sp, a >> 56, x, y, o);
}
