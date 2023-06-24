#include "../common.h"
DEFINE_OP(sro21) {
	NEXT_OP(sp, a, x, y, (sreg_t)o >> 21);
}
