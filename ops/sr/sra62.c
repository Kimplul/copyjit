#include "../common.h"
DEFINE_OP(sra62) {
	NEXT_OP(sp, (sreg_t)a >> 62, x, y, o);
}
