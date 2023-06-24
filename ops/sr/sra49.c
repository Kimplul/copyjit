#include "../common.h"
DEFINE_OP(sra49) {
	NEXT_OP(sp, (sreg_t)a >> 49, x, y, o);
}
