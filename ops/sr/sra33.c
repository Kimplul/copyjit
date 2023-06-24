#include "../common.h"
DEFINE_OP(sra33) {
	NEXT_OP(sp, (sreg_t)a >> 33, x, y, o);
}
