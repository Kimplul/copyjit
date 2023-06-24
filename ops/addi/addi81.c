#include "../common.h"
DEFINE_OP(addi81) {
	NEXT_OP(sp, a, x, y, o + 81);
}
