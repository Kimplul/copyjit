#include "../common.h"
DEFINE_OP(sra24) {
	NEXT_OP(sp, (sreg_t)a >> 24, x, y, o);
}
