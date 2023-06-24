#include "../common.h"
DEFINE_OP(sra4) {
	NEXT_OP(sp, (sreg_t)a >> 4, x, y, o);
}
