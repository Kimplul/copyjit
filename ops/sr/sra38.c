#include "../common.h"
DEFINE_OP(sra38) {
	NEXT_OP(sp, (sreg_t)a >> 38, x, y, o);
}
