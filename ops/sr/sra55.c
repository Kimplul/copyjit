#include "../common.h"
DEFINE_OP(sra55) {
	NEXT_OP(sp, (sreg_t)a >> 55, x, y, o);
}
