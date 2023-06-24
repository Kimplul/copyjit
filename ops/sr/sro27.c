#include "../common.h"
DEFINE_OP(sro27) {
	NEXT_OP(sp, a, x, y, (sreg_t)o >> 27);
}
