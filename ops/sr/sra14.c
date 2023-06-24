#include "../common.h"
DEFINE_OP(sra14) {
	NEXT_OP(sp, (sreg_t)a >> 14, x, y, o);
}
