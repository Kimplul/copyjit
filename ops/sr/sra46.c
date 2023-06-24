#include "../common.h"
DEFINE_OP(sra46) {
	NEXT_OP(sp, (sreg_t)a >> 46, x, y, o);
}
