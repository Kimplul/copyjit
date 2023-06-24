#include "../common.h"
DEFINE_OP(sra20) {
	NEXT_OP(sp, (sreg_t)a >> 20, x, y, o);
}
