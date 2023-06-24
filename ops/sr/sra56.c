#include "../common.h"
DEFINE_OP(sra56) {
	NEXT_OP(sp, (sreg_t)a >> 56, x, y, o);
}
