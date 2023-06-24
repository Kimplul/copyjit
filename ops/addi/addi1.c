#include "../common.h"
DEFINE_OP(addi1) {
	NEXT_OP(sp, a, x, y, o + 1);
}
