#include "../common.h"
DEFINE_OP(sro57) {
	NEXT_OP(sp, a, x, y, (sreg_t)o >> 57);
}
