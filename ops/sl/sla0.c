#include "../common.h"
DEFINE_OP(sla0) {
	NEXT_OP(sp, a >> 0, x, y, o);
}
