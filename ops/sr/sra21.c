#include "../common.h"
DEFINE_OP(sra21) {
	NEXT_OP(sp, (sreg_t)a >> 21, x, y, o);
}
