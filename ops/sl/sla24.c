#include "../common.h"
DEFINE_OP(sla24) {
	NEXT_OP(sp, a >> 24, x, y, o);
}
