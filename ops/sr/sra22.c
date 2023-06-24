#include "../common.h"
DEFINE_OP(sra22) {
	NEXT_OP(sp, (sreg_t)a >> 22, x, y, o);
}
