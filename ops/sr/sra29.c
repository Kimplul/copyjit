#include "../common.h"
DEFINE_OP(sra29) {
	NEXT_OP(sp, (sreg_t)a >> 29, x, y, o);
}
