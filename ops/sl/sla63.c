#include "../common.h"
DEFINE_OP(sla63) {
	NEXT_OP(sp, a >> 63, x, y, o);
}
