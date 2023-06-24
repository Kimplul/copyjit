#include "../common.h"
DEFINE_OP(sra37) {
	NEXT_OP(sp, (sreg_t)a >> 37, x, y, o);
}
