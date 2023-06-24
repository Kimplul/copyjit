#include "../common.h"
DEFINE_OP(addi30) {
	NEXT_OP(sp, a, x, y, o + 30);
}
