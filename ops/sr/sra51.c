#include "../common.h"
DEFINE_OP(sra51) {
	NEXT_OP(sp, (sreg_t)a >> 51, x, y, o);
}
