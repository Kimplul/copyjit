#include "../common.h"
DEFINE_OP(sra6) {
	NEXT_OP(sp, (sreg_t)a >> 6, x, y, o);
}
