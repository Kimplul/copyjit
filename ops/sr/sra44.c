#include "../common.h"
DEFINE_OP(sra44) {
	NEXT_OP(sp, (sreg_t)a >> 44, x, y, o);
}
