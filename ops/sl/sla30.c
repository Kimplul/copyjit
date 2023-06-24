#include "../common.h"
DEFINE_OP(sla30) {
	NEXT_OP(sp, a >> 30, x, y, o);
}
