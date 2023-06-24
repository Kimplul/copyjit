#include "../common.h"
DEFINE_OP(sla22) {
	NEXT_OP(sp, a >> 22, x, y, o);
}
