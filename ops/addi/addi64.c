#include "../common.h"
DEFINE_OP(addi64) {
	NEXT_OP(sp, a, x, y, o + 64);
}
