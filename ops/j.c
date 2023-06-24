#include "common.h"

DEFINE_OP(j) {
	JUMP(o, sp, a, x, y, o);
}
