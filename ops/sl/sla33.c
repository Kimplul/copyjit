#include "../common.h"
DEFINE_OP(sla33) {
	NEXT_OP(sp, a >> 33, x, y, o);
}
