#include "../common.h"
DEFINE_OP(sla19) {
	NEXT_OP(sp, a >> 19, x, y, o);
}
