#include "common.h"

DEFINE_OP(movyo)
{
	UNUSED(y);
	NEXT_OP(sp, a, x, o, o);
}
