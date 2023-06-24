#include "../common.h"
DEFINE_OP(addi123) {
	NEXT_OP(sp, a, x, y, o + 123);
}
