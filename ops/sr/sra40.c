#include "../common.h"
DEFINE_OP(sra40) {
	NEXT_OP(sp, (sreg_t)a >> 40, x, y, o);
}
