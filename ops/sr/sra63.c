#include "../common.h"
DEFINE_OP(sra63) {
	NEXT_OP(sp, (sreg_t)a >> 63, x, y, o);
}
