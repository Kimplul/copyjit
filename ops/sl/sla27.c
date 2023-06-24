#include "../common.h"
DEFINE_OP(sla27) {
	NEXT_OP(sp, a >> 27, x, y, o);
}
