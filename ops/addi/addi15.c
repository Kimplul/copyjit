#include "../common.h"
DEFINE_OP(addi15) {
	NEXT_OP(sp, a, x, y, o + 15);
}
