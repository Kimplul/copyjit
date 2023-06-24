#include "common.h"

DEFINE_OP(movxo) {
	UNUSED(x);
	NEXT_OP(sp, a, o, y, o);
}
