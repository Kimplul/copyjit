#include "../common.h"
DEFINE_OP(sra41) {
	NEXT_OP(sp, (sreg_t)a >> 41, x, y, o);
}
