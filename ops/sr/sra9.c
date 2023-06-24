#include "../common.h"
DEFINE_OP(sra9) {
	NEXT_OP(sp, (sreg_t)a >> 9, x, y, o);
}
