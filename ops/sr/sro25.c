#include "../common.h"
DEFINE_OP(sro25) {
	NEXT_OP(sp, a, x, y, (sreg_t)o >> 25);
}
