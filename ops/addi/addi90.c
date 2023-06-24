#include "../common.h"
DEFINE_OP(addi90) {
	NEXT_OP(sp, a, x, y, o + 90);
}
