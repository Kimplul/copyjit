#include "../common.h"
DEFINE_OP(sro44) {
	NEXT_OP(sp, a, x, y, (sreg_t)o >> 44);
}
