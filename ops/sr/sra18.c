#include "../common.h"
DEFINE_OP(sra18) {
	NEXT_OP(sp, (sreg_t)a >> 18, x, y, o);
}
