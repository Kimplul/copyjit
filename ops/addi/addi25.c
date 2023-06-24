#include "../common.h"
DEFINE_OP(addi25) {
	NEXT_OP(sp, a, x, y, o + 25);
}
