#include "../common.h"
DEFINE_OP(addi13) {
	NEXT_OP(sp, a, x, y, o + 13);
}
