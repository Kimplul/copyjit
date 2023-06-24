#include "../common.h"
DEFINE_OP(addi63) {
	NEXT_OP(sp, a, x, y, o + 63);
}
