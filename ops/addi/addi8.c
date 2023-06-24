#include "../common.h"
DEFINE_OP(addi8) {
	NEXT_OP(sp, a, x, y, o + 8);
}
