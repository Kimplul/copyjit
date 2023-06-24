#include "../common.h"
DEFINE_OP(sro52) {
	NEXT_OP(sp, a, x, y, (sreg_t)o >> 52);
}
