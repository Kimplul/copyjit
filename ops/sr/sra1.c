#include "../common.h"
DEFINE_OP(sra1) {
	NEXT_OP(sp, (sreg_t)a >> 1, x, y, o);
}
