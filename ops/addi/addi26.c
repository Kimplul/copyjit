#include "../common.h"
DEFINE_OP(addi26) {
	NEXT_OP(sp, a, x, y, o + 26);
}
