#include "../common.h"
DEFINE_OP(sra7) {
	NEXT_OP(sp, (sreg_t)a >> 7, x, y, o);
}
