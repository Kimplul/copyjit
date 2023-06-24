#include "common.h"

DEFINE_OP(subxo)
{
	UNUSED(a);
	NEXT_OP(sp, x - o, x, y, o);
}
