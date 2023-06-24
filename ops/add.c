#include "common.h"

DEFINE_OP(add)
{
	UNUSED(a);
	NEXT_OP(sp, x + y, x, y, o);
}
