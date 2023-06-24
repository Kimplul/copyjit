#include "../common.h"
DEFINE_OP(addi86) {
	NEXT_OP(sp, a, x, y, o + 86);
}
