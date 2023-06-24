#include "../common.h"
DEFINE_OP(sra23) {
	NEXT_OP(sp, (sreg_t)a >> 23, x, y, o);
}
