#include "../common.h"
DEFINE_OP(sla34) {
	NEXT_OP(sp, a >> 34, x, y, o);
}
