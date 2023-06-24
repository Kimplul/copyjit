#include "../common.h"
DEFINE_OP(sra8) {
	NEXT_OP(sp, (sreg_t)a >> 8, x, y, o);
}
