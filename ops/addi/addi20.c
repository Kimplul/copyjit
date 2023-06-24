#include "../common.h"
DEFINE_OP(addi20) {
	NEXT_OP(sp, a, x, y, o + 20);
}
