#include "../common.h"
DEFINE_OP(sra48) {
	NEXT_OP(sp, (sreg_t)a >> 48, x, y, o);
}
