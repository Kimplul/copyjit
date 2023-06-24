#include "../common.h"
DEFINE_OP(addi11) {
	NEXT_OP(sp, a, x, y, o + 11);
}
