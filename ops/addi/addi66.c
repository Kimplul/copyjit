#include "../common.h"
DEFINE_OP(addi66) {
	NEXT_OP(sp, a, x, y, o + 66);
}
