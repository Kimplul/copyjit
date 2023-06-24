#include "../common.h"
DEFINE_OP(sra30) {
	NEXT_OP(sp, (sreg_t)a >> 30, x, y, o);
}
