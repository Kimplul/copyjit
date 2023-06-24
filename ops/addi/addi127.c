#include "../common.h"
DEFINE_OP(addi127) {
	NEXT_OP(sp, a, x, y, o + 127);
}
