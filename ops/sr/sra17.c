#include "../common.h"
DEFINE_OP(sra17) {
	NEXT_OP(sp, (sreg_t)a >> 17, x, y, o);
}
