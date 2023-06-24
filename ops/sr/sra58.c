#include "../common.h"
DEFINE_OP(sra58) {
	NEXT_OP(sp, (sreg_t)a >> 58, x, y, o);
}
