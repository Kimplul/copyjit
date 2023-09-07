#include "common.h"

DEFINE_OP(popx) {
	UNUSED(x);
	NEXT_OP(sp - 1, a, *(sp - 1), y, o);
}
