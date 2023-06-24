#include "../common.h"
DEFINE_OP(sla58) {
	NEXT_OP(sp, a >> 58, x, y, o);
}
