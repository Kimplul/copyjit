#include "common.h"

DEFINE_OP(movxa)
{
	UNUSED(x);
	NEXT_OP(sp, a, a, y, o);
}
