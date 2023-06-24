#include "../common.h"
DEFINE_OP(sra59) {
	NEXT_OP(sp, (sreg_t)a >> 59, x, y, o);
}
