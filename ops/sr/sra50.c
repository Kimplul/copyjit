#include "../common.h"
DEFINE_OP(sra50) {
	NEXT_OP(sp, (sreg_t)a >> 50, x, y, o);
}
