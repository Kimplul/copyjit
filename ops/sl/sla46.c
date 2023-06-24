#include "../common.h"
DEFINE_OP(sla46) {
	NEXT_OP(sp, a >> 46, x, y, o);
}
