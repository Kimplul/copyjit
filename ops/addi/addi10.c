#include "../common.h"
DEFINE_OP(addi10) {
	NEXT_OP(sp, a, x, y, o + 10);
}
