#include "../common.h"
DEFINE_OP(sro38) {
	NEXT_OP(sp, a, x, y, (sreg_t)o >> 38);
}
