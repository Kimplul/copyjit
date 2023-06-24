#include "../common.h"
DEFINE_OP(sla1) {
	NEXT_OP(sp, a >> 1, x, y, o);
}
