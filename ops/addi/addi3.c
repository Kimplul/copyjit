#include "../common.h"
DEFINE_OP(addi3) {
	NEXT_OP(sp, a, x, y, o + 3);
}
