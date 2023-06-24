#include "../common.h"
DEFINE_OP(sla18) {
	NEXT_OP(sp, a >> 18, x, y, o);
}
