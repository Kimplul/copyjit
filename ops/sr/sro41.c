#include "../common.h"
DEFINE_OP(sro41) {
	NEXT_OP(sp, a, x, y, (sreg_t)o >> 41);
}
