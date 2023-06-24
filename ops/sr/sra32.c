#include "../common.h"
DEFINE_OP(sra32) {
	NEXT_OP(sp, (sreg_t)a >> 32, x, y, o);
}
