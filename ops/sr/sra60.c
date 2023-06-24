#include "../common.h"
DEFINE_OP(sra60) {
	NEXT_OP(sp, (sreg_t)a >> 60, x, y, o);
}
