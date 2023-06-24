#include "../common.h"
DEFINE_OP(addi111) {
	NEXT_OP(sp, a, x, y, o + 111);
}
