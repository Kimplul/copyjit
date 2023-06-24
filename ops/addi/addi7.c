#include "../common.h"
DEFINE_OP(addi7) {
	NEXT_OP(sp, a, x, y, o + 7);
}
