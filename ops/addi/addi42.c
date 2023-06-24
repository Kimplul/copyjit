#include "../common.h"
DEFINE_OP(addi42) {
	NEXT_OP(sp, a, x, y, o + 42);
}
