#include "../common.h"
DEFINE_OP(addi126) {
	NEXT_OP(sp, a, x, y, o + 126);
}
