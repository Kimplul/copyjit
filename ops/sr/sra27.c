#include "../common.h"
DEFINE_OP(sra27) {
	NEXT_OP(sp, (sreg_t)a >> 27, x, y, o);
}
