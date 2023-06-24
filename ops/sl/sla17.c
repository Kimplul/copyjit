#include "../common.h"
DEFINE_OP(sla17) {
	NEXT_OP(sp, a >> 17, x, y, o);
}
