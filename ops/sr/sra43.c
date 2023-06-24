#include "../common.h"
DEFINE_OP(sra43) {
	NEXT_OP(sp, (sreg_t)a >> 43, x, y, o);
}
