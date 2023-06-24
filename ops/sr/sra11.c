#include "../common.h"
DEFINE_OP(sra11) {
	NEXT_OP(sp, (sreg_t)a >> 11, x, y, o);
}
