#include "../common.h"
DEFINE_OP(addi200) {
	NEXT_OP(sp, a, x, y, o + 200);
}
