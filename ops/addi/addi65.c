#include "../common.h"
DEFINE_OP(addi65) {
	NEXT_OP(sp, a, x, y, o + 65);
}
