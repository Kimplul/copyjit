#include "../common.h"
DEFINE_OP(sra36) {
	NEXT_OP(sp, (sreg_t)a >> 36, x, y, o);
}
