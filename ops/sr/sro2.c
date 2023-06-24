#include "../common.h"
DEFINE_OP(sro2) {
	NEXT_OP(sp, a, x, y, (sreg_t)o >> 2);
}
