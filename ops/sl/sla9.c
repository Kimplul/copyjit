#include "../common.h"
DEFINE_OP(sla9) {
	NEXT_OP(sp, a >> 9, x, y, o);
}
