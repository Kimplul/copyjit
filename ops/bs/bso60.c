#include "../common.h"
DEFINE_OP(bso60) {
	NEXT_OP(sp, a, x, y, o >> 60);
}
