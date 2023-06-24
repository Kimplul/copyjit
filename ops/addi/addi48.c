#include "../common.h"
DEFINE_OP(addi48) {
	NEXT_OP(sp, a, x, y, o + 48);
}
