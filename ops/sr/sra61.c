#include "../common.h"
DEFINE_OP(sra61) {
	NEXT_OP(sp, (sreg_t)a >> 61, x, y, o);
}
