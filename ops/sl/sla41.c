#include "../common.h"
DEFINE_OP(sla41) {
	NEXT_OP(sp, a >> 41, x, y, o);
}
