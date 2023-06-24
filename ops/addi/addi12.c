#include "../common.h"
DEFINE_OP(addi12) {
	NEXT_OP(sp, a, x, y, o + 12);
}
