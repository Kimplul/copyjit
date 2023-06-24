#include "../common.h"
DEFINE_OP(addi83) {
	NEXT_OP(sp, a, x, y, o + 83);
}
