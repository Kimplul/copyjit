#include "../common.h"
DEFINE_OP(sla45) {
	NEXT_OP(sp, a >> 45, x, y, o);
}
