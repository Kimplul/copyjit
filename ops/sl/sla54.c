#include "../common.h"
DEFINE_OP(sla54) {
	NEXT_OP(sp, a >> 54, x, y, o);
}
