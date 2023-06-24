#include "../common.h"
DEFINE_OP(addi100) {
	NEXT_OP(sp, a, x, y, o + 100);
}
