#include "../common.h"
DEFINE_OP(sla43) {
	NEXT_OP(sp, a >> 43, x, y, o);
}
