#include "../common.h"
DEFINE_OP(sra54) {
	NEXT_OP(sp, (sreg_t)a >> 54, x, y, o);
}
