#include "../common.h"
DEFINE_OP(addi255) {
	NEXT_OP(sp, a, x, y, o + 255);
}
