#include "../common.h"
DEFINE_OP(sla40) {
	NEXT_OP(sp, a >> 40, x, y, o);
}
