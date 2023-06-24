#include "../common.h"
DEFINE_OP(addi99) {
	NEXT_OP(sp, a, x, y, o + 99);
}
